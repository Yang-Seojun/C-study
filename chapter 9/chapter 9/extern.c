#include <stdio.h>

int x = 50;

int main(void) {
	int x = 100;

	{
		//���������� ���������� �̸��� ������ exterm���� �ҷ����� ���������� �ҷ��´�.
		extern int x;
		printf("x = %d", x);
	}

	return 0;
}