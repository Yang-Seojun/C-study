#include <stdio.h>
#define SEED_MONEY 1000000

int main()
{
	int year = 0, money = SEED_MONEY;

	while (1)
	{
		year++;
		money += money * 0.3;
		if (money > 10 * SEED_MONEY)break;
	}

	printf("%d��", year);

	return 0;

}