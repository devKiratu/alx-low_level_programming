#include "variadic_functions.h"

/**
 * print_all - prints the following types: char, int, float, char*
 * @format: string containing types
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *separator = ", ";

	if (format == NULL)
		return;

	va_start(args, format);

	while (*(format + i))
	{
		switch (*(format + i))
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				{
					char *s = va_arg(args, char *);

					printf("%s", s == NULL ? "(nil)" : s);
					break;
				}
			default:
				i++;
				continue;
		}
		i++;
		if (*(format + i) != '\0')
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
