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

	printf("�ʱ� �ݾ�: %d$\n", money);
	printf("��ǥ �ݾ�: %d$\n\n", goal);
	printf("100�� �߿��� %d�� ����\n", check);

	return 0;
}