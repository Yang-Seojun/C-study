#include <stdio.h>

int main()
{
	int price, user, c50000, c10000, c5000, c1000, c500, c100, c50, c10;
	
	printf("���� ���� �Է��Ͻÿ� : ");
	scanf_s("%d", &price);

	printf("����ڰ� �� �� : ");
	scanf_s("%d", &user);

	price = user - price;  //6800

	c50000 = price / 50000;
	//price = price % 50000;
	printf("�������� : %d��\n", c50000);

	c10000 = price % 50000 / 10000;
	printf("�������� : %d��\n", c10000);

	c5000 = price % 10000 / 5000;
	printf("��õ���� : %d��\n", c5000);

	c1000 = price % 5000 / 1000;
	printf("õ���� : %d��\n", c1000);

	c500 = price % 1000 / 500;
	printf("����� : %d��\n", c500);

	c100 = price % 500 / 100;
	printf("��� : %d��\n", c100);

	c50 = price % 100 / 50;
	printf("���ʿ� : %d��\n",c50);

	c10 = price % 50 / 10;
	printf("�ʿ� : %d", c10);

}