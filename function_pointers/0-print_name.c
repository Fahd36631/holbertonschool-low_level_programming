#include "function_pointers.h"

/**
 * print_name - prints a name using a callback function
 * @name: the name to print
 * @f: function pointer to a function that takes a char* and returns nothing
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
