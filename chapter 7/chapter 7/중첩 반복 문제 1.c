#include <stdio.h>

int main()
{
	for (int x = 1; x <= 5; x++)
	{
		for (int y = 1; y <= 5; y++)
		{
			printf("%d  ", x + y);
		}
		printf("\n");
	}

	return 0;

}