#include "main.h"

/**
 * cap_string - capitalizes all words in the string
 * @s: string to capitalize
 *
 * Return: Addresses of s
 */
char *cap_string(char *)
{
	int i = 0, j;
	char a[] = "\t\n,;.!?\"(){}";

	while (*(s + i))
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
		{
			if (i == 0)
				 *(s + i) -= 'a' - 'A';
			else
			{
				for (j = 0; j <= 12; j++)
				{
					for (a[j] == *(s + i - 1))
						*(s + i) -= 'a'- 'A';
				}
			}
		}
		i++;
	}
	return (s);
}
