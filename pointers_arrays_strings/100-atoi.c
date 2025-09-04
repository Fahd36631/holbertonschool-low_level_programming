#include <limits.h>

/**
 * _atoi - convert a string to an integer
 * @s: the string to convert
 *
 * Return: the integer value of the string
 */
int _atoi(char *s)
{
    int i = 0;
    int sign = 1;
    int started = 0;
    int res = 0;

    while (s[i] != '\0')
    {
        if (!started && s[i] == '-')
            sign = -sign;
        else if (!started && s[i] == '+')
            ;
        else if (s[i] >= '0' && s[i] <= '9')
        {
            int d = s[i] - '0';

            started = 1;
            if (res < (INT_MIN + d) / 10)
                return (sign == 1) ? INT_MAX : INT_MIN;
            res = res * 10 - d;
        }
        else if (started)
            break;
        i++;
    }

    if (sign == 1)
    {
        if (res == INT_MIN)
            return (INT_MAX);
        return (-res);
    }
    return (res);
}
