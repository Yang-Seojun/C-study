#include <stdio.h>

int main() {
	int L, num = 0;

	for (L = 100; L <= 500; ) {
		printf("현재 연료량 : %d\n", L);
		if (L < 20)
			printf("(경고) 연료가 20리터 미만입니다.\n");
		printf("연료 충전은 +, 소모는 -로 입력해주세요 : ");
		scanf_s("%d", &num);
		L += num;
		printf("\n");
	}
}