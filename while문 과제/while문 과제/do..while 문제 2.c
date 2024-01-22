#include <stdio.h>
#include<stdlib.h>

int main()
{
	int a, b, c, d, e;
	srand((unsigned)time(NULL));	

	do
	{
		a = ranad() % 100;
		b = ranad() % 100;
		c = ranad() % 100;
		d = ranad() % 100;
		e = ranad() % 100;
	} while (a == b || a == c || a == d || a == e || b == c || b == d || b == e || c == d || c == e || d == e);

	printf("%d %d %d %d %d", a, b, c, d, e);

	return 0;

}