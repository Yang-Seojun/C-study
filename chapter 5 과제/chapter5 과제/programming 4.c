#include <stdio.h>

int main()
{
	int  cm, fitt;
	double inch;

	printf("Ű�� �Է��Ͻÿ�(cm) : ");
	scanf_s("%d", &cm);

	fitt = cm / (2.54 * 12);
	inch = (cm - fitt * 12 * 2.54) / 2.54;

	printf("%dcm�� %d��Ʈ %.2lf��ġ �Դϴ�.", cm, fitt, inch);


	return 0;
}