#include <stdio.h>

int main()
{
	int a = 10,i;

	printf("%d\n", a);
	printf("%#o\n", a);				//8���� 16������ ����� �� %o,x ���̿� #�� ���δ�
	printf("%#X\n", a);

	for (i = a; i >= 0; i--) {
		printf("%d", (a >> i) & 1);
	}

	return 0;
}