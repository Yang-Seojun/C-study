#include <stdio.h>

int x = 50;

int main(void) {
	int x = 100;

	{
		//지역변수와 전역변수의 이름이 같지만 exterm으로 불러오면 전역변수를 불러온다.
		extern int x;
		printf("x = %d", x);
	}

	return 0;
}