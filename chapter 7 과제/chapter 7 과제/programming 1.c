#include <stdio.h>
#include <Windows.h>

int main()
{
	int n;

	printf("ī������ �ʱⰪ�� �Է��Ͻÿ�(����: ��) : ");
	scanf_s("%d", &n);

	for (; n > 0; n--)
	{
		printf("%d  ", n);
		Sleep(1000);
	}

	printf("\a");

	return 0;
}