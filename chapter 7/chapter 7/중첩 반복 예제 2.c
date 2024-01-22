#include <stdio.h>

int main()
{
	for (int y = 5; y > 0; y--)
	{
		for (int x = 0; x < y; x++)
		{
			printf("*");
		}
		printf("\n");
	}
}