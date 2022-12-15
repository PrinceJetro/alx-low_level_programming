#include "main.h"

/**
 * print_numbers - prints number
 */

void print_most_numbers(void)
{
int a = 48;
while (a < 58)
{
_putchar(a);
a++;
if (a == 2 || a == 4)
{
a++;
}
}
_putchar('\n');
}
