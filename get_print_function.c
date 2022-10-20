#include "main.h"

/**
 *_printc - prototype function
 *Description: A function that prints a char
 *@c: character to print
 *Return: Always 1 (Success)
 */
int _printc(va_list c)
{
char character = (char)va_arg(c, int);
_putchar(character);
return (1);
}

/**
 *_prints - protoype function
 *Description: function that prints a string
 *@s: string to print
 *Return: lenght of string
 */
int _prints(va_list s)
{
char *str = va_arg(s, char *);
int i = 0;
if (str == NULL)
str = "(null)";
while (str[i])
_putchar(str[i++]);
return (i);
}
/**
 *_printd - prototype function
 *Description: prints a decimal
 *@d: integer to print
 *Return: number of printed digits
 */
int _printd(va_list d)
{
int a[10];
int j = 1, m = 1000000000, n, sum = 0, counter = 0;
n = va_arg(d, int);
if (n < 0)
{
n *= -1;
_putchar('-');
counter++;
}
a[0] = n / m;
for (; j < 10; j++)
{
m /= 10;
a[j] = (n / m) % 10;
}
for (j = 0; j < 10; j++)
{
sum += a[j];
if (sum != 0 || j == 9)
{
_putchar('0' + a[j]);
counter++;
}
}
return (counter);
}
/**
 *_printi - prints an integer
 *@i: integer to print
 *Return: number of printed digits
 */
int _printi(va_list i)
{
int a[10];
int j = 1, m = 1000000000, n, sum = 0, counter = 0;
n = va_arg(i, int);
if (n < 0)
{
n *= -1;
_putchar('-');
counter++;
}
a[0] = n / m;
for (; j < 10; j++)
{
m /= 10;
a[j] = (n / m) % 10;
}
for (j = 0; j < 10; j++)
{
sum += a[j];
if (sum != 0 || j == 9)
{
_putchar('0' + a[j]);
counter++;
}
}
return (counter);
}
