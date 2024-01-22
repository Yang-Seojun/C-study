/*정수 상수 프로그램*/
#include <stdio.h>

int main()
{
	int x = 10;				//10은 10진수이고 int형이고 값은 십진수로 10이다.
	int y = 010;			//010은 8진수 이고 int형이고 값은 십진수로 8이다.
	int z = 0x10;			//010은 16진수이고 int형이고 값은 십진수로 16이다.

	printf("X = %d", x);
	printf("Y = %d", y);
	printf("Z = %d", z);

	return 0;
}