#include <stdio.h>

int main()
{
	int n1, n2, lcm = 0, x;
	
	printf("���� 2���� �Է��Ͻÿ� : ");
	scanf_s("%d %d", &n1, &n2);

	for (int i = 1; i <= n1 && i <= n2; i++)
	{
		if (n1 % i == 0 && n2 % i == 0)
		{
			x = i;
		}
	}

	lcm = (n1 * n2) / x;

	printf("�ּҰ������ %d�Դϴ�.", lcm);

	return 0;
}