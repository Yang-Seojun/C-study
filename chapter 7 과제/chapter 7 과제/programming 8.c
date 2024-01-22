#include <stdio.h>

int main()
{
	int num;

	printf("정수를 입력하시오 : ");
	scanf_s("%d", &num);

	for (int x = 1; x <= num; x++)
	{
		for (int y = 1; y <= x; y++)
		{
			printf("%d ", y);
		}
		printf("\n");
	}

	return 0;
}