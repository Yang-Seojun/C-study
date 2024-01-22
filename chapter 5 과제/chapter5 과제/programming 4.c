#include <stdio.h>

int main()
{
	int  cm, fitt;
	double inch;

	printf("키를 입력하시오(cm) : ");
	scanf_s("%d", &cm);

	fitt = cm / (2.54 * 12);
	inch = (cm - fitt * 12 * 2.54) / 2.54;

	printf("%dcm는 %d피트 %.2lf인치 입니다.", cm, fitt, inch);


	return 0;
}