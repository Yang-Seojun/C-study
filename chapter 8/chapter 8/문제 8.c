#include <stdio.h>

void show_digit(int x) 
{
	if (x > 0)
	{
		show_digit(x / 10);
		printf("%d ", x % 10);
	}
}

int main()
{
	int i;

	printf("������ �Է��Ͻÿ� :");
	scanf_s("%d", &i);

	show_digit(i);

	return 0;
}