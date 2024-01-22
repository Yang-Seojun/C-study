#include <stdio.h>

int main()
{
	int n, result = 1;

	printf("자연수를 입력하시오 : ");
	scanf_s("%d", &n);

	for (int i = 1; i <= 10; i++)
	{
		result = i * n;
		printf("%d  ", result);
	}

	return 0;

}