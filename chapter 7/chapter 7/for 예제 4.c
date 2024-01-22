#include <stdio.h>

int main()
{
	int i, n;
	long fact = 1;

	printf("정수를 입력하시오 : ");
	scanf_s("%d", &n);

	for (i = 1; i <= n; i++) {
		fact *= i;
	}

	printf("%d은 %d입니다.\n", n, fact);

	return 0;

}