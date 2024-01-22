#include <stdio.h>

int hanoi_tower(int n, char from, char tmp, char to) {	//3, A , B , C
	if (n == 1) {
		printf("���� 1�� %c���� %c���� �ű��.\n", from, to);
	}
	else {
		//from�� �� ���� ������ ������ ������ ������ tmp�� �ű��
		hanoi_tower(n - 1, from, to, tmp);	//(3,A,B,C,) (2,A,C,B,)

		//from�� �ִ� �� ���� ������ to�� �ű��.
		printf("���� %d�� %c���� %c���� �ű��.\n", n, from, to);

		//tmp�� ������ to�� �ű��.
		hanoi_tower(n - 1, tmp, from, to);
	}
}

int main(void) {
	int n;
	char from = 'A', tmp = 'B', to = 'C';

	printf("������ ������ �Է��Ͻÿ� : ");
	scanf_s("%d", &n);

	printf("\n\n");

	hanoi_tower(n, from, tmp, to);

	return 0;
}