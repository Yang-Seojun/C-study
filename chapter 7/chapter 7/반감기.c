#include <stdio.h>

int main(void) {
	int year = 0, h_year;
	double initial = 100.0, current;

	printf("�ݰ��⸦ �Է��Ͻÿ�(��) : ");
	scanf_s("%d", &h_year);

	current = initial;

	while (current >= initial / 10)
	{
		year += h_year;
		current /= 2.0;
		printf("%d�� �Ŀ� ���� �� %lf\n", year, current);
	}
	printf("1/10 ���Ϸ� �Ǳ���� �ɸ� �ð� = %d��\n", year);

	return 0;
}