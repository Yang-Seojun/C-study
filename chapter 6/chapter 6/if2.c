#include <stdio.h>

int main()
{
	int num;

	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &num);

	if (num < 0)
		num = -num;

	/*(num < 0) ? (num = -num) : num;*/

	printf("������ %d�Դϴ�.\n", num);
	
	return 0;
}
