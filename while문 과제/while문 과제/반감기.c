#include <stdio.h>

int main()
{
	int year = 0, hallfife;
	double n = 100., nn = 100.;

	printf("반감기를 입력하시오(년) : ");
	scanf_s("%d", &hallfife);

	while (nn > n /10.)
	{
		nn = nn / 2;
		year += hallfife;
		printf("%d년 후에 남은 양 = %lf\n", year, nn);
	}

	printf("1/10이하로 되기 까지 걸린 시간 = %d년\n", year);

	return 0;

}