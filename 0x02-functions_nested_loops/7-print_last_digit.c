#includ "main.h"
/**
 * print the last digit
 * @n: integer argument
 * Return: last digit of number
 */
int print_last_digit(int)
{
if (n < 0)
n *= -1;
_putchar('0' + (n % 10));
return (n % 10);
}
