#include <stdio.h>
#include <math.h>

int main()
{
	int num, sum = 0, result = 0;

	printf("n�� ���� �Է��Ͻÿ� : ");
	scanf_s("%d", &num);

	for (int i = 1; i <= 10; i++)
	{
		sum = pow(i, 2);
		result += sum;
	}

	printf("��갪�� %d�Դϴ�.", result);

	return 0;
}