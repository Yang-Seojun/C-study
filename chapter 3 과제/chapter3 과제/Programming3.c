#include <stdio.h>

int main()
{
	int base, height, area;			//������ �����ϴ� 3���� ����

	printf("�ﰢ���� �غ� : ");			//�Է� �ȳ� �޽���
	scanf_s("%d", &base);				//����ڷκ��� �غ��� �Է�

	printf("�ﰢ���� ���� : ");			//�Է� �ȳ� �޽���
	scanf_s("%d", &height);			    //����ڷκ��� ���̰� �Է�

	area = 0.5 * base * height;			//���̸� ���ϴ� ��

	printf("�ﰢ���� ���̴� %d �Դϴ�.\n",area);			//�Է¹��� �غ��� ���̷α��� ���̰� ���

	return 0;					//�Լ� ����� ��ȯ
}