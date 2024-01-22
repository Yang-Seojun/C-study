#include <stdio.h>

int main()
{
	int i = 255;

	printf("%#o\n", i);
	printf("%d\n", i);
	printf("%#X\n\n", i);

	for (i = -1; i >= -3; i--) {
		printf("%#X\n", i);
	}
}