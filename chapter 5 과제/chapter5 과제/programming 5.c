#include <stdio.h>

int main() 
{
	int num, ten, one;

	printf("������ �Է��Ͻÿ� (100�̸��� ����) : ");
	scanf_s("%d", &num);

	ten = num / 10;
	one = num % 10;

	(num > 99) ? (printf("���ڰ� �ʹ� ŭ�ϴ�")) : (printf("���� �ڸ� : %d\n���� �ڸ� : %d", ten, one));
}