/*������ �ڷ����� ũ�⸦ ����ϴ� ���α׷�*/
#include <stdio.h>

int main()
{
	short year = 0;			//0���� �ʱ�ȭ�Ѵ�
	int sale = 0;
	long total_sale = 0;
	long long large_value;

	year = 10;			//�� 3��2õ�� ���� �ʵ��� ���� 
	sale = 200000000;		//�� 21���� ���� �ʵ��� ����
	total_sale = year * sale;		//�� 21���� ���� �ʵ��� ����  int * shor = int 

	printf("total_slae = %d\n", total_sale);

	return 0;
}