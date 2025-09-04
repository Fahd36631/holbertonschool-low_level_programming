#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: input string
 *
 * Return: integer converted from string
 */
int _atoi(char *s)
{
	int i = 0, sign = 1, res = 0, started = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] == '+')
			sign *= 1;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			started = 1;
			res = res * 10 - (s[i] - '0');
		}
		else if (started)
			break;
		i++;
	{

	if (sign > 0)
		res *= -1;

	return (res);
}
