#include <stdio.h>

int max(int x, int y, int z)
{
	if (x > y && x > z)
		return x;
	else if (y > x && y > z)
		return y;
	else
		return z;
}

int min(int x, int y, int z)
{
	if (x < y && x < z)
		return x;
	else if (y < x && y < z)
		return y;
	else
		return z;
}

int mid(int x, int y, int z)
{
	if (x > y && x > z)
	{
		if (y > z)
			return y;
		else
			return z;
	}
	else if (z > x && z > y)
	{
		if (x > y)
			return x;
		else
			return y;
	}
}

int get_integer()
{
	int x;

	printf("정수를 입력하시오 : ");
	scanf_s("%d", &x);

	return x;
}

int main()
{
	int x, y, z, larger, smaller, result;

	x = get_integer();
	y = get_integer();
	z = get_integer();

	larger = max(x, y, z);
	printf("더 큰 값은 %d입니다. \n", larger);
	smaller = min(x, y, z);
	printf("더 작은 값은 %d입니다. \n", smaller);
	result = mid(x, y, z);
	printf("중간 값은 %d입니다. \n", result);

	return 0;
}