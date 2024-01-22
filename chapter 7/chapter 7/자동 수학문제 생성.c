#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	int x, y, result, sol, check = 0;

	srand((unsigned int)time(NULL));
	
	for (int i = 0; i <= 9; i++) {
		x = rand() % 10;
		y = rand() % 10;
		sol = x + y;

		printf("%d + %d = ", x, y);
		scanf_s("%d", &result);

		if (result == sol) {
			printf("정답입니다.\n");
			check++;
		}
		else printf("틀렸습니다. 정답은 %d\n", sol);
	}

	printf("총 %d문제 맞았습니다.\n", check);

	return 0;
}