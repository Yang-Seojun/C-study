#include <stdio.h>

int main()
{
	int i = 1, n, sum = 0;

	printf("정수를 입력하시오 : ");
	scanf_s("%d", &n);

	while (i <= n)
	{
		sum += i;
		i++;

		printf("누적 합은 %d \n", sum);
	}

	printf("\n1부터 %d까지의 합은 %d입니다.\n", n, sum);
	
	return 0;
}