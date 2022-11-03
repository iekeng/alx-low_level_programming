#include "main.h"
/**
  *_strlen_recursion -returns string length
  *@s: input parameter
  *Return: string length
  */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
		return (len);
}

