#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int main() {
	int i;
	int minimum = 1;
	int prices[SIZE] = { 0 };

	printf("-----------------------------------------------\n");
	printf("  1   2   3   4   5   6   7   8   9   10\n");
	printf("-----------------------------------------------\n");

	srand((unsigned)time(NULL));

	for (i = 0; i < SIZE; i++) {
		prices[i] = rand() % 100;
		printf("%3d ", prices[i]);
	}

	printf("\n\n");

	minimum = prices[0];

	for (i = 0; i < SIZE; i++) {
		if (prices[i] < minimum)
			minimum = prices[i];
	}

	printf("최소값은 %d입니다.\n", minimum);

	return 0;
}