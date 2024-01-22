#include <stdio.h>

int hanoi_tower(int n, char from, char tmp, char to) {	//3, A , B , C
	if (n == 1) {
		printf("원판 1을 %c에서 %c으로 옮긴다.\n", from, to);
	}
	else {
		//from의 맨 밑의 원판을 제외한 나머지 원판을 tmp로 옮긴다
		hanoi_tower(n - 1, from, to, tmp);	//(3,A,B,C,) (2,A,C,B,)

		//from에 있는 한 개의 원판을 to로 옮긴다.
		printf("원판 %d을 %c에서 %c으로 옮긴다.\n", n, from, to);

		//tmp의 원판을 to로 옮긴다.
		hanoi_tower(n - 1, tmp, from, to);
	}
}

int main(void) {
	int n;
	char from = 'A', tmp = 'B', to = 'C';

	printf("원판의 개수를 입력하시오 : ");
	scanf_s("%d", &n);

	printf("\n\n");

	hanoi_tower(n, from, tmp, to);

	return 0;
}