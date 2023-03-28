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
_strlen(const char *s)
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
	return "";
}