#include <stdio.h>
#include <stdlib.h>

int main()
{
	srand((unsigned)time(NULL));
	int answer = rand() % 100;
	int guess;
	int tries = 0;
	
	do
	{
		printf("������ �����Ͽ� ���ÿ� : ");
		scanf_s("%d", &guess);
		tries++;
		if (guess > answer) printf("HIGH\n");
		if (guess < answer) printf("LOW\n");
	} while (guess != answer);

	printf("�����մϴ�. �õ�Ƚ�� = %d\n", tries);

	return 0;

}