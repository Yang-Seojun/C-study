#include <stdio.h>

int main()
{
	int num, i, result=0;

	while (1)
	{
		printf("정수를 입력하시오 : ");
		scanf_s("%d", &num);
		if (num % 3 != 0 || num < 0)break;
		result = num / 3;
		printf("%d\n", result);
	}

	return 0;

}