#include <stdio.h>

int main()
{
	double rate;		// ��/�޷� ȯ��
	double usd;			//�޷�ȭ
	double krw;			//��ȭ�� ������ ������ ����

	printf("ȯ���� �Է��Ͻÿ� : ");			//�Է� �ȳ� �޽���
	scanf_s("%lf", &rate);					//����ڷκ��� ȯ�� �Է�

	printf("��ȭ �ݾ��� �Է��Ͻÿ� : ");		//�Է� �ȳ� �޽���
	scanf_s("%d", &krw);

	usd = krw / rate;		//�޷�ȭ�� ȯ��

	printf("��ȭ %d���� %lf�޷��Դϴ�.\n", krw, usd);			//��� ��� ���

	return 0;			//�Լ� ���
}