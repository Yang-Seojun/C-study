#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int coin_toss(void) {
	int coin = rand() % 2;
	return coin;
}

int main(void) {
	int toss, head = 0, tail = 0;

	srand((unsigned int)time(NULL));

	for (toss = 0; toss < 100; toss++) {
		if (coin_toss() == 1) head++;
		else tail++;
	}

	printf("동전의 앞면 : %d\n", head);
	printf("동전의 뒷면 : %d\n", tail);

	return 0;
}