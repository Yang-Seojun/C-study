#include <stdio.h>

int main()
{
	int x = 10, y = 10, z = 33;

	x += 1;
	y *= 2;
	z %= 10 + 20;			// z = z % (10 + 20)°ú °°´Ù

	printf("x = %d\ny = %d\nz = %d\n", x, y, z);

	return 0;
}