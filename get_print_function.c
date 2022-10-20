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
