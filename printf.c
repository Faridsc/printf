#define INT_ABR "%d"
#define CHAR_ABR "%c"
#define STR_ABR "%s"
#define UNSIGNED_ABR "%s"
/**
 * TYPES MACROS
 */
#define INT_T 0x4
#define STRING_T 0x8
#define CHAR_T 0x1
#define UNSIGNED_T 0x5

typedef struct Type
{
	unsigned int index;
	int type;
	struct Type *next;
};

void _printf(char *format, ...)
{
}