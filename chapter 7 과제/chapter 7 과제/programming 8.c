#include <stdio.h>

int main()
{
	int num;

	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &num);

	for (int x = 1; x <= num; x++)
	{
		for (int y = 1; y <= x; y++)
		{
			printf("%d ", y);
		}
		printf("\n");
	}

	return 0;
}