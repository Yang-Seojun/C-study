#include <stdio.h>

int  get_intger()
{
	int vlaue;

	printf("정수를 입력하시오 : ");
	scanf_s("%d", &vlaue);

	return vlaue;
}

int add(int x, int y)
{
	return x + y;
}

int sub(int x, int y)
{
	return (x > y) ? x - y : y - x;
}

int mul(int x, int y)
{
	return x * y;
}

int div(int x, int y)
{
	if (x == 0 || y == 0) {
		return 0;
	}
	else
		return x / y;
}

void show(char* ch, int value) //배열, 문자열을 받을때 '* ch' 를 쓴다
{
	printf("%s %d\n", ch, value);
}

int main()
{
	int result;

	int x = get_intger();
	int y = get_intger();

	result = add(x, y);
	show("두 수의 합 :", result);

	result = sub(x, y);
	show("두 수의 차 :", result);

	result = mul(x, y);
	show("두 수의 곱 :", result);

	result = div(x, y);
	show("두 수의 몫 :", result);

	return 0;
}