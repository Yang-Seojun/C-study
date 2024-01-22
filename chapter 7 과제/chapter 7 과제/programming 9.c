#include <stdio.h>

int main()
{
	int n1, n2, lcm = 0, x;
	
	printf("정수 2개를 입력하시오 : ");
	scanf_s("%d %d", &n1, &n2);

	for (int i = 1; i <= n1 && i <= n2; i++)
	{
		if (n1 % i == 0 && n2 % i == 0)
		{
			x = i;
		}
	}

	lcm = (n1 * n2) / x;

	printf("최소공배수는 %d입니다.", lcm);

	return 0;
}