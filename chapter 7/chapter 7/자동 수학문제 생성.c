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
			printf("�����Դϴ�.\n");
			check++;
		}
		else printf("Ʋ�Ƚ��ϴ�. ������ %d\n", sol);
	}

	printf("�� %d���� �¾ҽ��ϴ�.\n", check);

	return 0;
}