#include <stdio.h>

int main(void)
{
	float inch, mm;			//inch,mm�̶�� �Ǽ��� �����ϴ� ����

	printf("��ġ ������ �Է� : ");		//�Է� �ȳ� �޽��� ���
	scanf_s("%f", &inch);				//�ϳ��� �Ǽ��� �޾Ƽ� inch�� ����

	mm = inch * 25.4;					//mm�� inch�� 25.4�� ���Ѱ��� ����

	printf("%f ��ġ = %f mm", inch, mm);		//inch�� mm���� ��ȯ�� ���� ���

	return 0;				//0�� �ܺη� ��ȯ
}