#include <stdio.h>

int main(void) {
	int year = 0, h_year;
	double initial = 100.0, current;

	printf("반감기를 입력하시오(년) : ");
	scanf_s("%d", &h_year);

	current = initial;

	while (current >= initial / 10)
	{
		year += h_year;
		current /= 2.0;
		printf("%d년 후에 남은 양 %lf\n", year, current);
	}
	printf("1/10 이하로 되기까지 걸린 시간 = %d년\n", year);

	return 0;
}