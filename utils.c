#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
/**
 * _putchar - prints a char to the std output
 * @c: the char to print
 * Return: an int
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _strlen - return the string length
 * @s: the string to check its length
 * Return: int the string length
 */
int _strlen(char *s)
{
	int len;
	char *ss;

	ss = s;
	len = 0;
	while (*ss != '\0')
	{
		len++;
		ss++;
	}
	return (len);
}

/**
 * dchar - takes a number from 0 to 9 and returns its ascii char
 * @n: an int from 0 to 9
 * Return: an ascii char
 */
char dchar(int n)
{
	if (n > 0 && n < 9)
	{
		return 48 + n;
	}
	write(2, "the passed argument is not valid!\n", 35);
	exit(-1);
}

/**
 * to_hex - converts an int to hex format
 * @n: the int to convert
 * Return: a string as a hex format
 */
char *to_hex(int n)
{
	/* todo: complete */
	return ("");
}

/**
 * to_str - cast an int to string
 * @n: the int to cast
 * Return: the final string
 */

char *to_str(int n)
{
	return ("");
}

/**
 * strsrch - searches for a substring and returns
 * the first index of the first char
 * @src: the source string
 * @sub: the string to search
 * Return: int; the index of the first char or -1 if unfound
 */

int strsrch(char *src, char *s)
{
	int src_len, sub_len, i, j;

	src_len = _strlen(src);
	sub_len = _strlen(s);

	/*
	 * if one of the strings are null or empty strings src length is superior to s
	 */
	if (sub_len == 0 || src_len == 0 || src == NULL || s == NULL || sub_len > src_len)
		return -(1);

	for (i = 0; i < src_len; i++)
	{
		if (src[i] == s[0])
		{
			for (j = 1; j < sub_len; j++)
			{
				if (src[i + j] != s[j])
					break;
			}
			if (j == sub_len)
				return (i);
		}
	}
	return (-1);
}

/**
 * substr - returns a substring from index @start to @end
 * switch start and and if end < start
 * if end > the length of @src @end = the last char index
 * @src: the source string
 * @start: the starting index
 * @end: the last index
 * Return: a sub string or NULL
 */
char *substr(char *src, unsigned int start, unsigned int end)
{
	unsigned int t;
	int len, i, j;
	char *sub;

	len = _strlen(src);
	/*
	 * switch the start and end value if start > end
	 */
	if (start > end)
	{
		t = start;
		start = end;
		end = t;
	}
	if (end >= len)
		end = len - 1;

	sub = (char *)malloc(sizeof(char) * (end - start) + 1);

	for (i = start, j = 0; i <= end && sub != NULL; i++, j++)
	{
		sub[j] = src[i];
	}
	sub[i + 1] = '\0';
	printf("DEBUG: sub = %s\n DEBUG: sub len = %d", (sub == NULL) ? "NULL" : sub, _strlen(sub));
	return sub;
}