#include <stdio.h>

int main()
{
	int a = 0b1010;
	int b = 012;
	int c = 0xA;

	printf("%d\n", a);
	printf("%o\n", a);
	printf("%X\n\n", a);

	printf("%d\n", b);
	printf("%o\n", b);
	printf("%X\n\n", b);

	printf("%d\n", c);
	printf("%o\n", c);
	printf("%X\n", c);

	return 0;
}