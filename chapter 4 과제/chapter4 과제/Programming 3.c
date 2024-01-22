#include <stdio.h>

int main()
{
	int x = 10, y = 20, a;

	printf("x = %d  y = %d\n", x, y);

	a = x;
	x = y;
	y = a;

	printf("x = %d  y = %d", x, y);

}