#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: types of args passed
 */

void print_all(const char * const format, ...)
{
	char *alps, *sap = "";
	int i = 0;
	va_list args;

	va_start(args, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sap, va_arg(args, int));
					break;
				case 'i':
					printf("%s%d", sap, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", sap, va_arg(args, double));
					break;
				case 's':
					alps = va_arg(args, char *);
					if (!alps)
						alps = "(nil)";
					printf("%s%s", sap, alps);
					break;
				default:
					i++;
					continue;
			}
			sap = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(args);
}
