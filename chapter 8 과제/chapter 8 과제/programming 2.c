#include <stdio.h>

int multiple(int n, int m);

int main(void){
	int num1, num2;

	printf("ù ��° ������ �Է��Ͻÿ� : ");
	scanf_s("%d", &num1);
	printf("�� ��° ������ �Է��Ͻÿ� : ");
	scanf_s("%d", &num2);

	multiple(num1, num2);

	return 0;
}

int multiple(int n, int m) {
	((n % m == 0) ? printf("%d�� %d�� ����Դϴ�.", n, m) : printf("%d�� %d�� ����� �ƴմϴ�.", n, m));
}