#include "main.h"
/**
 *get_print_func - protoytpe function
 *Description: checks for valid format specifier
 *@format: format specifier
 *Return: pointer to valid function or NULL
 */
int (*get_print_func(const char *format))(va_list)
{
int i = 0;
print_t p[] = {
{"c", _printc},
{"s", _prints},
{"d", _printd},
{"i", _printi},
{NULL, NULL}
};
while (p[i].pr != NULL)
{
if (*(p[i].pr) == *format)
return (p[i].func);
i++;
}
return (NULL);
}

/**
 *_printf - prototype function
 *Description: function for format printing
 *@format: list of arguments to printing
 *Return: Number of characters to printing
 */
int _printf(const char *format, ...)
{
va_list ap;
int (*func)(va_list);
unsigned int i = 0, count = 0;
if (format == NULL)
return (-1);
va_start(ap, format);
while (format && format[i])
{
if (format[i] != '%')
{
_putchar(format[i]);
count++;
i++;
continue;
}
else
{
if (format[i + 1] == '%')
{
_putchar('%');
count++;
i += 2;
continue;
}
else
{
func = get_print_func(&format[i + 1]);
if (func == NULL)
return (-1);
i += 2;
count += func(ap);
continue;
}
}
i++;
}
va_end(ap);
return (count);
}
