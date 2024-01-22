/*사격형의 넓이와 둘레길이 구하기*/
#include <stdio.h>

int main(void)
{
	double w;
	double h;
	double area;
	double perimenter;

	w = 10.0;
	h = 5.0;
	area = w * h;
	perimenter = 2 * (w + h);

	printf("사각형의 넓이 : %lf\n", area);
	printf("사격형의 둘레 : %lf\n", perimenter);

	return 0;

}