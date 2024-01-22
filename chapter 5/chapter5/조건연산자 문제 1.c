#include <stdio.h>

int main() 
{

	int x, y, z;

	printf("정수 3개를 입력하시오 : ");
	scanf_s("%d %d %d", &x, &y, &z);

	printf("%d ", (x > y && x > z) ? 1 : 0);
	
	printf("%d\n", (x == y && x == z) ? 1 : 0);

	return 0;

}