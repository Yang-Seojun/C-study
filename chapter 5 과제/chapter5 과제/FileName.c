#include <stdio.h>

int main(void)
{
	int cm, ft;
	double in;

	printf("키를 입력하시오(cm):");
	scanf_s("%d", &cm);

	ft = cm / (2.54 * 12);
	in = (cm - ft * 12 * 2.54) / 2.54;

	printf("%d cm는 %d피트%.2lf인치입니다.", cm, ft, in);

	return 0;

}