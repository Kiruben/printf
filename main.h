#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdarg.h>
/**
 *struct print - structure for printing various types
 *@pr: type of print
 *@func: function to print that type
 */
typedef struct print
{
	char *pr;
	int (*func)(va_list);
} print_t;

int _putchar(char);
int _printf(const char *, ...);
int _printc(va_list c);
int _prints(va_list s);

#endif
