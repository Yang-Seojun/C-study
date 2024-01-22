#include <stdio.h>
#include <math.h>

int main()
{
	int num, sum = 0, result = 0;

	printf("n의 값을 입력하시오 : ");
	scanf_s("%d", &num);

	for (int i = 1; i <= 10; i++)
	{
		sum = pow(i, 2);
		result += sum;
	}

	printf("계산값은 %d입니다.", result);

	return 0;
}