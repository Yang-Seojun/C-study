#include <stdio.h>

int main()
{
	int min_h, min_w, gi_h, gi_w;

	printf("�μ��� Ű�� �����Ը� �Է��Ͻÿ� : ");
	scanf_s("%d %d", &min_h, &min_w);

	printf("�⿵���� Ű�� �����Ը� �Է��Ͻÿ� : ");
	scanf_s("%d %d", &gi_h, &gi_w);

	printf("%d\n", (min_h > gi_h && min_w > gi_w) ? 1 : 0);

	return 0;
}