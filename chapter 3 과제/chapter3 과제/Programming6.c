#include <stdio.h>

int main(void)
{
	double weight_on_moon, weight_in_earth;					//�Ǽ��� �����ϴ� 2���� ����

	printf("�����Ը� �Է��Ͻÿ�(����: kg) : ");				//�Է� �ȳ� �޽���
	scanf_s("%lf", &weight_in_earth);						//����ڷκ��� �������� ������ �Է�

	weight_on_moon = weight_in_earth * 0.17;				//�޿����� ������ ���ϴ� ��

	printf("�޿����� �����Դ� %.2lfkg�Դϴ�", weight_on_moon);			//�޿����� ������ ����ϱ�
}