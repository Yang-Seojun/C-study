#include <stdio.h>

int show_digit(int x);

int main(void) {
	int num;

	printf("정수를 입력하시오 : ");
	scanf_s("%d", &num);

	show_digit(num);

	return 0; // 1 2 3 4
}

int show_digit(int x) {
	if (x / 10 == 0)  printf("%d ", x);
	else {
		show_digit(x / 10);

		printf("%d ", x % 10);
	}
}