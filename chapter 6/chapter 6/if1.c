#include <stdio.h>

int main(void) {
	int num;

	printf("정수를 입력하시오 : ");
	scanf_s("%d", &num);

	if (num > 0) printf("양수입니다.\n");

	printf("입력된 값은 %d입니다", num);

	return 0;
}