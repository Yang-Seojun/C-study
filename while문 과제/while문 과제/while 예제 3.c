#include <stdio.h>

int main()
{
	int i = 1, sum = 0, n;

	printf("정수를 입력하시오 : ");
	scanf_s("%d", &n);

	while (i <= n)
	{
		sum += i;
		i++;
	}

	printf("1부터 %d까지의 합은 %d입니다.\n", n, sum);

	return 0;

}