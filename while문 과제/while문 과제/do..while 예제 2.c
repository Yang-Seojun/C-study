#include <stdio.h>

int main()
{
	int i;

	do
	{
		printf("1---���θ����\n");
		printf("2---���� ����\n");
		printf("3---���� �ݱ�\n");
		printf("�ϳ��� �����Ͻÿ� : ");
		scanf_s("%d", &i);
	} while (i < 1 || i > 3);

	printf("���õ� �޴� = %d\n", i);

	return 0;

}