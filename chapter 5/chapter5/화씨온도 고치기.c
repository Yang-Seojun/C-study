#include <stdio.h>

int main()
{
	double f_temp, c_temp;

	printf("화씨온도를 입력하시오 : ");
	scanf_s("%lf", &f_temp);

	c_temp = (double)5 / 9 * (f_temp - 32);

	printf("섭씨온도는 %.1lf입니다", c_temp);

	return 0;
}