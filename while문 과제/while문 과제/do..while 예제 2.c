#include <stdio.h>

int main()
{
	int i;

	do
	{
		printf("1---새로만들기\n");
		printf("2---파일 열기\n");
		printf("3---파일 닫기\n");
		printf("하나를 선택하시오 : ");
		scanf_s("%d", &i);
	} while (i < 1 || i > 3);

	printf("선택된 메뉴 = %d\n", i);

	return 0;

}