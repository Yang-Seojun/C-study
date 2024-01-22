#include <stdio.h>

int factorial(int n)
{
	int i, result = 1;

	for (i = 1; i <= n; i++)
		result *= i;

	return result;
}

int combination(int n, int r)
{
	return (factorial(n) / factorial(r) * factorial(n - r));
}

int get_int()
{
	int n;

	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &n);

	return n;
}

int main()
{
	int a, b;

	a = get_int();
	b = get_int();

	printf("C(%d, %d) = %d \n", a, b, combination(a, b));

	return 0;
}