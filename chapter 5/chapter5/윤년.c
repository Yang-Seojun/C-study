#include <stdio.h>

int main()
{
	int year, result;

	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &year);

	result = ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);
	printf("result = %d\n", result);
}