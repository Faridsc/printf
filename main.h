#ifndef MAIN_H
#define MAIN_H
/**
 * returns the string length
 */
unsigned int _strlen(const char *);

/**
 * prints a char in the std output
 */
int _putchar(char);

/**
 * converts an int to hex representation and returns it aas a string
 */
char *to_hex(int);

/**
 * dchar - returns the digit char representaion
 */
char dchar(int);
/**
 * converts an int to string
 */
char *to_str(int);

/**
 * string compare
 */
int _strcmp(const char *, const char *);

/**
 * searches a sub string in a string and returns the index of the first char
 */

int strsrch(char *, char *);

/**
 * subsrtings a string from the index @i to @j
 */

char *substr(char *src, unsigned int, unsigned int);
/**
 * Parses print formated strings
 */
void _printf(char *, ...);

#endif