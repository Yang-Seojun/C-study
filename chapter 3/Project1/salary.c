//�����ɾ��� ����ϴ� ���α׷�
#include <stdio.h>

int main()
{
	int ysalary, msalary;		//����, �� ���ɾ�

	printf("������ �Է��Ͻÿ� (����:����) : ");		//�ȳ� �޽��� ���
	scanf_s("%d", &ysalary);						//�ϳ��� ������ �޾� ������ ����

	msalary = ysalary / 12;			//������ 12�� ������ �����ɾ� ���
	printf("�����ɾ� (����:����) : %d\n", msalary);

	return 0;
}