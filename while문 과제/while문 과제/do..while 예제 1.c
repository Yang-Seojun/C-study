#include <stdio.h>

int main()
{
	int num, sum = 0;

	do
	{
		printf("������ �Է��Ͻÿ� : ");
		scanf_s("%d", &num);
		sum += num;
	} while (num != 0);

	printf("���ڵ��� �� = %d\n", sum);

	return 0;

}