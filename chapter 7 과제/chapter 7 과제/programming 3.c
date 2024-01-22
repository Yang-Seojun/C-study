#include <stdio.h>

int main()
{
	int num, sum=0;

	for (int i = 0; i < 3; i++)
	{
		printf("숫자를 입력히시오 : ");
		scanf_s("%d", &num);
		if (num < 0) {
			i--;
			continue;
		}
		else sum += num;
	}
	printf("\n합계는 %d입니다.",sum);
}