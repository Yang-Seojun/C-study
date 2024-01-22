#include <stdio.h>

int main()
{
	int sum = 0;

	for (int i = 0; i < 10; i++)
	{
		if (i % 3 == 0) {
			sum += i;
			continue;
		}
		printf("%d  ", i);
	}

	printf("\n3의 배수의 합 = %d", sum);

	return 0;
}