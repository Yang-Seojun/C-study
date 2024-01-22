#include <stdio.h>

void print_binary(int x);

int main(void) {
	int n;

	printf("정수를 입력하시오 : ");
	scanf_s("%d", &n);

	print_binary(n);
	printf("\n");

	return 0;
}

void print_binary(int x) 
{
	if (x > 0) {
		print_binary(x / 2);  //n = 9 -> 9 4 2 1
		printf("%d", x % 2);
	}
}