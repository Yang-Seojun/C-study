#include <stdio.h>

int main()
{
	int year = 0, hallfife;
	double n = 100., nn = 100.;

	printf("�ݰ��⸦ �Է��Ͻÿ�(��) : ");
	scanf_s("%d", &hallfife);

	while (nn > n /10.)
	{
		nn = nn / 2;
		year += hallfife;
		printf("%d�� �Ŀ� ���� �� = %lf\n", year, nn);
	}

	printf("1/10���Ϸ� �Ǳ� ���� �ɸ� �ð� = %d��\n", year);

	return 0;

}