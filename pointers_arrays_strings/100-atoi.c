#include "main.h"
#include <limits.h>

/**
 * _atoi - convert a string to an integer
 * @s: input C string
 *
 * Return: the integer value represented by the string.
 *         If no digits are found, returns 0.
 */
int _atoi(char *s)
{
	int sign = 1;
	int started = 0;
	int acc = 0; /* keep it negative to handle INT_MIN safely */

	while (*s)
	{
		if (!started)
		{
			if (*s == '-')
				sign = -sign;
			else if (*s == '+')
				; /* ignore */
			else if (*s >= '0' && *s <= '9')
			{
				int d = *s - '0';

				/* overflow check before acc = acc * 10 - d */
				if (acc < (INT_MIN + d) / 10)
					return (sign == 1 ? INT_MAX : INT_MIN);
				acc = acc * 10 - d;
				started = 1;
			}
			else if ((*s >= '0' && *s <= '9') == 0)
				; /* still skipping non-digits before the number */
		}
		else
		{
			if (*s < '0' || *s > '9')
				break;
			else
			{
				int d = *s - '0';

				if (acc < (INT_MIN + d) / 10)
					return (sign == 1 ? INT_MAX : INT_MIN);
				acc = acc * 10 - d;
			}
		}
		s++;
	}

	if (!started)
		return (0);

	return (sign == 1 ? -acc : acc);
}
