#include <stdio.h>

int main()
{
	int num, i, result=0;

	while (1)
	{
		printf("������ �Է��Ͻÿ� : ");
		scanf_s("%d", &num);
		if (num % 3 != 0 || num < 0)break;
		result = num / 3;
		printf("%d\n", result);
	}

	return 0;

}