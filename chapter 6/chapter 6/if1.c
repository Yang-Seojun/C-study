#include <stdio.h>

int main(void) {
	int num;

	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &num);

	if (num > 0) printf("����Դϴ�.\n");

	printf("�Էµ� ���� %d�Դϴ�", num);

	return 0;
}