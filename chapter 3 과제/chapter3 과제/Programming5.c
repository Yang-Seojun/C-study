#include <stdio.h>

int main(void)
{
	double num, result;				//�Ǽ��� �����ϴ� 2���� ����

	printf("�Ǽ��� �Է��Ͻÿ� : ");			//�Է� �ȳ� �޽���
	scanf_s("%lf", &num);					//����ڷκ��� ȭ���� �Է�

	result = 3 * num * num + 7 * num + 11;			//���׽�

	printf("���׽��� ���� %.2lf", result);			//����ڷκ��� ���� �Ǽ��� ���׽� ��� ���

	return 0;			//�Լ� ����� ��ȯ
}