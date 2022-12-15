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
if (a == 50 || a == 52)
{
a++;
}
}
_putchar('\n');
}
