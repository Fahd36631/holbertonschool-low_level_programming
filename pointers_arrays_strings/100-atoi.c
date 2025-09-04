#include "main.h"
#include <limits.h>

/**
 * _atoi - convert a string to an integer
 * @s: input C-string
 *
 * Return: converted int value, or 0 if no digits. On overflow,
 *         returns INT_MAX / INT_MIN depending on the sign.
 */
int _atoi(char *s)
{
        int i = 0;
        int sign = 1;
        int found = 0;

        /* scan until first digit; track sign flips before digits */
        while (s[i] != '\0')
        {
                if (s[i] == '-')
                        sign = -sign;
                else if (s[i] == '+')
                        ; /* keep sign as-is */
                else if (s[i] >= '0' && s[i] <= '9')
                {
                        found = 1;
                        break;
                }
                i++;
        }

        if (!found)
                return (0);

        if (sign == 1)
        {
                int res = 0;

                for (; s[i] >= '0' && s[i] <= '9'; i++)
                {
                        int d = s[i] - '0';

                        if (res > (INT_MAX - d) / 10)
                                return (INT_MAX);
                        res = res * 10 + d;
                }
                return (res);
        }
        else
        {
                /* build directly as negative to safely reach INT_MIN */
                int res = 0;

                for (; s[i] >= '0' && s[i] <= '9'; i++)
                {
                        int d = s[i] - '0';

                        if (res < (INT_MIN + d) / 10)
                                return (INT_MIN);
                        res = res * 10 - d;
                }
                return (res);
        }
}
