#include <stdio.h>
#include <string.h>

/**
 * _atoi - string
 *
 * @s: string
 *
 * Return: 0
 */
int _atoi(char *s)
{       
        int i, j, k, l, min;

        k = 0;
        j = strlen(s);
        l = 0;
        min = -2147483648;
        for (i = 0; i < j; i++)
        {
                if (s[i] == '-')
                {
                        k += 1;
                }
                if (s[i] >= '0' && s[i] <= '9')
                {
                        if (l == 214748364 && s[i] >= '8')
                        {
				l = min;
				break;
			}
			k = k * 10 + (s[i] - '0');
			if (!(s[i +1] >= '0' && s[i + 1] <= '9'))
				break;
			if ((i +1) ==j)
				break;
		}
	}
	if (k % 2 && l != min)
		l = l * -1;
	return (l);
}
