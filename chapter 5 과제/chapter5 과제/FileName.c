#include <stdio.h>

int main(void)
{
	int cm, ft;
	double in;

	printf("Ű�� �Է��Ͻÿ�(cm):");
	scanf_s("%d", &cm);

	ft = cm / (2.54 * 12);
	in = (cm - ft * 12 * 2.54) / 2.54;

	printf("%d cm�� %d��Ʈ%.2lf��ġ�Դϴ�.", cm, ft, in);

	return 0;

}