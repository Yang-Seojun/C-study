#include <stdio.h>

int main()
{
	char c = 'A';

	for (c; c <= 'Z'; c++)
	{
		printf("%c ----> %d\n", c, c);
	}

	return 0;
}