#include <stdio.h>

int  get_intger()
{
	int vlaue;

	printf("������ �Է��Ͻÿ� : ");
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

void show(char* ch, int value) //�迭, ���ڿ��� ������ '* ch' �� ����
{
	printf("%s %d\n", ch, value);
}

int main()
{
	int result;

	int x = get_intger();
	int y = get_intger();

	result = add(x, y);
	show("�� ���� �� :", result);

	result = sub(x, y);
	show("�� ���� �� :", result);

	result = mul(x, y);
	show("�� ���� �� :", result);

	result = div(x, y);
	show("�� ���� �� :", result);

	return 0;
}