.section .data      # Define a section for initialized data
msg:                 # Define a label for the message string
    .ascii "Hello, Holberton\n"  # Define the message as a null-terminated ASCII string

.section .text      # Define a section for code
.globl _start       # Define the program entry point as "_start"

_start:             # Program entry point
    mov $1, %rax    # System call for "write" is 1
    mov $1, %rdi    # File descriptor for stdout is 1
    mov $msg, %rsi  # Message to print is stored in the "msg" label
    mov $20, %rdx   # Message length (including the newline) is 20 bytes
    syscall         # Call the kernel to write the message to stdout

    mov $60, %rax   # System call for "exit" is 60
    xor %rdi, %rdi  # Exit status code is 0
    syscall         # Call the kernel to exit the program
