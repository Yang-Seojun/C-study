#include <stdio.h>
#include <stdlib.h>

int main()
{
	srand((unsigned)time(NULL));
	int answer = rand() % 100;
	int guess;
	int tries = 0;

	printf("%d\n", answer);

	do {
		printf("정답을 추축하여 보시오 : ");
		scanf_s("%d", &guess);
		tries++;

		if (guess > answer) printf("HIGH\n");
		if (guess < answer) printf("LOW\n");

	} while (guess != answer);

	printf("축하합니다. 시도회수 = %d\n", tries);

	return 0;

}