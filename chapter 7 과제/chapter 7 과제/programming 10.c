#include <stdio.h>

int main()
{
	int num;

	for (int x = 2; x <= 100; x++)
	{
		num = 1;

		for (int y = 2; y < x; y++)
		{
			if (x % y == 0) {
				num = 0;
				break;
			}
		}

		if (num == 1) {
			printf("%d ", x);
		}
	}

	return 0;
}