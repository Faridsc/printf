#include <stdio.h>

#include "main.h"

int main(int argc, char **argv)
{
	int i = strsrch("jqsdkqsdhqskdj %s qsdkqmsdkqsdkmqsd", "%s");
	printf("---> %d\n", i);
	printf(">>>>>: %s\n", substr("abcdefghijklmnopqrstuvwxyz", 3, 40));

	return (0);
}