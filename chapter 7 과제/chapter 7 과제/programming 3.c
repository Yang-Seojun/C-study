#include <stdio.h>

int main()
{
	int num, sum=0;

	for (int i = 0; i < 3; i++)
	{
		printf("���ڸ� �Է����ÿ� : ");
		scanf_s("%d", &num);
		if (num < 0) {
			i--;
			continue;
		}
		else sum += num;
	}
	printf("\n�հ�� %d�Դϴ�.",sum);
}