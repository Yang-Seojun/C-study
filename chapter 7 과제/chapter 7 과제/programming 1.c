#include <stdio.h>
#include <Windows.h>

int main()
{
	int n;

	printf("카운터의 초기값을 입력하시오(단위: 초) : ");
	scanf_s("%d", &n);

	for (; n > 0; n--)
	{
		printf("%d  ", n);
		Sleep(1000);
	}

	printf("\a");

	return 0;
}