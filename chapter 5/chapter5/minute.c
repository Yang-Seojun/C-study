// ������ ������ ���α׷�
#include <stdio.h>
#define SEC_PER_MINUTE 60

int main()
{
	int input, h, m, s;
	printf("�ʸ� �Է��Ͻÿ� : ");
	scanf_s("%d", &input);

	s = input % SEC_PER_MINUTE;
	m = input / SEC_PER_MINUTE % SEC_PER_MINUTE;
	h = input / (SEC_PER_MINUTE * SEC_PER_MINUTE);
	
	printf("%d�ʴ� %d�ð� %d�� %d���Դϴ�.\n", input, h, m, s);
}