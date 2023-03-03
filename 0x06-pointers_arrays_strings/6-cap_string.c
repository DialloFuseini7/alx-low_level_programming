#include "main.h"
/**
 * cap_string - function that capitalizes all of a string
 * Return: string capitlised
 * @str: string to capitalize
 */
char *cap_string(char *str)
{
	int i, tst, j;
	char sep[] = {9, 10, 32, 34, 33, 34, 40, 41, 44, 46, 59, 123, 125};

	i = 0;
	while (*(str + i) != '\0')
	{
		if (*(str + i) >= 97 && *(str + i) <= 122)
		{
			if (i == 0)
			{
				*(str + i) = *(str + i) - 32;
			}
			else
			{
				tst = 0;
				for (j = 0; j < 13; j++)
				{
					if (sep[j] == *(str + i - 1))
					{
						tst = 1;
						break;
					}
					*(str + i) = *(str + i) - 32;
				}
			}
		}
		i++;
	}
	return (str);
}
