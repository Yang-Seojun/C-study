#include <stdio.h>

int main()
{
	int a, b, c, num;

	printf("���� 3���� �Է��Ͻÿ� : ");
	scanf_s("%d %d %d", &a, &b, &c);

	num = ((a > b && a > c) ? a : ((b > a && b > c) ? b : c));

	printf("�ִ밪�� %d�Դϴ�", num);

}