#include <stdio.h>

int main() 
{

	int x, y, z;

	printf("���� 3���� �Է��Ͻÿ� : ");
	scanf_s("%d %d %d", &x, &y, &z);

	printf("%d ", (x > y && x > z) ? 1 : 0);
	
	printf("%d\n", (x == y && x == z) ? 1 : 0);

	return 0;

}