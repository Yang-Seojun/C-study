#include <stdio.h>

int main()
{
	int space = 7;

	for (int x = 1; x <= 7; x++)
	{
		for (int y = 1; y < 8 - x; y++)
		{
			printf(" ");
		}
		for (int z = 0; z < x; z++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}