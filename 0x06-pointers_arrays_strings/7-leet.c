#include "main.h"
/**
  *leet - encodes a string into 1337
  *@s: input parameter
  *Return: @s
  */
char *leet(char *s)
{
	int i, c = 0;
	int sl[] = {97, 101, 111, 116, 108};
	int ul[] = {65, 69, 79, 84, 76};
	int n[] = {52, 51, 48, 55, 49};

	while (s[c] != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (s[c] == s[i] || s[c] == ul[i])
			{
				s[c] = n[i];
				break;
			}
		}
		c++;
	}
	return (s);
}

