#include "main.h"

/**
 * cap_string - capitalizes the first letter of a word
 * @a: a pointer to the string
 *
 * Return: a string of characters
 */

char *cap_string(char *a)
{
	int i, j, k;
	int sep[13] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	for (i = 0; *(a + i) != '\0'; i++)
	{
		for (j = 0; j < 13; j++)
		{
			if (i == 0)
			{
				if (*(a + i) > 96 && *(a + i) < 123)
					*(a + i) -= 32;
			}

			else if (*(a + i) == sep[j])
			{
				k = i + 1;
				if (*(a + k) > 96 && *(a + k) < 123)
					*(a + k) -= 32;
			}
		}
	}

	return (a);
}
