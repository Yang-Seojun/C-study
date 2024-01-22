#include <stdio.h>

int main()
{
	int a = 10,i;

	printf("%d\n", a);
	printf("%#o\n", a);				//8진수 16진수로 출력할 때 %o,x 사이에 #을 붙인다
	printf("%#X\n", a);

	for (i = a; i >= 0; i--) {
		printf("%d", (a >> i) & 1);
	}

	return 0;
}