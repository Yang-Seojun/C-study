#include <stdio.h>

int main(void)
{
	double fahrenheit, celsius;					//�Ǽ��� �����ϴ� 2���� ����

	printf("ȭ�� �µ��� �Է��Ͻÿ� : ");		//�Է� �ȳ� �޽���
	scanf_s("%lf", &fahrenheit);							//����ڷκ��� ȭ���� �Է�

	celsius = (5.0 / 9.0) * (fahrenheit - 32.0);				//ȭ������ ���������� �ٲ��ִ� ��

	printf("�������� %.2lf�� �Դϴ�.\n", celsius);		//ȭ������ ���������� ��ȯ�Ͽ� ���

	return 0;					//�Լ� ����� ��ȯ
}