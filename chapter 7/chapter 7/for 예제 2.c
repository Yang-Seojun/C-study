#include <stdio.h>

int main()
{
	int i, sum = 0, n;

	printf(" n >> ");
	scanf_s("%d", &n);

	for (i = 1; i <= n; i++) {
		sum += i;
		printf("i의 값은 %d입니다.\n", i);
	}


	printf("1분터 n까지의 정수의 합 = %d\n", sum);

	return 0;

}