#include <stdio.h>

int main()
{
	int price, user, c50000, c10000, c5000, c1000, c500, c100, c50, c10;
	
	printf("물건 값을 입력하시오 : ");
	scanf_s("%d", &price);

	printf("사용자가 낸 돈 : ");
	scanf_s("%d", &user);

	price = user - price;  //6800

	c50000 = price / 50000;
	//price = price % 50000;
	printf("오만원권 : %d장\n", c50000);

	c10000 = price % 50000 / 10000;
	printf("만원원권 : %d장\n", c10000);

	c5000 = price % 10000 / 5000;
	printf("오천원권 : %d장\n", c5000);

	c1000 = price % 5000 / 1000;
	printf("천원권 : %d장\n", c1000);

	c500 = price % 1000 / 500;
	printf("오백원 : %d개\n", c500);

	c100 = price % 500 / 100;
	printf("백원 : %d개\n", c100);

	c50 = price % 100 / 50;
	printf("오십원 : %d개\n",c50);

	c10 = price % 50 / 10;
	printf("십원 : %d", c10);

}