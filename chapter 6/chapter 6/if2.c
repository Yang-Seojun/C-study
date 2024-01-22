#include <stdio.h>

int main()
{
	int num;

	printf("정수를 입력하시오 : ");
	scanf_s("%d", &num);

	if (num < 0)
		num = -num;

	/*(num < 0) ? (num = -num) : num;*/

	printf("절댓값은 %d입니다.\n", num);
	
	return 0;
}
