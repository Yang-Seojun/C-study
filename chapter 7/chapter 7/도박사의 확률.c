#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	int money = 50, goal = 250, check = 0;
	srand((unsigned int)time(NULL));

	for (int i = 0; i < 100; i++) {
		int cash = money;
		while (cash < goal && cash > 0) {
			if ((double)rand() / RAND_MAX < 0.5) cash++;
			else cash--;
		}
		if (cash >= goal) check++;
	}

	printf("초기 금액: %d$\n", money);
	printf("목표 금액: %d$\n\n", goal);
	printf("100번 중에서 %d번 성공\n", check);

	return 0;
}