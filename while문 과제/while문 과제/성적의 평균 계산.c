#include <stdio.h>

int main()
{
	int i = 0, n = 1;
	double avr, sum = 0;

	printf("�����Ϸ��� ������ �Է��Ͻÿ�\n");

	while (1)
	{
		printf("������ �Է��Ͻÿ� : ");
		scanf_s("%d", &n);
		if (n < 0) break;
		sum += n;
		i++;
	}

	avr = sum / i;

	printf("������ ����� %lf�Դϴ�.", avr);

	return 0;

}