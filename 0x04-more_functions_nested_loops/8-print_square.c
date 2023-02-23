#include "main.h"
/**
*print_square - prints squares
*@size: parameter
*Return:returns nothing
*/
void print_square(int size)
{
int length, width;
if (size > 0)
{
for (length = 0; length < size; length++)
{
for (width = 0; width < (size - 1); width++)
_putchar('#');

_putchar('#');
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
