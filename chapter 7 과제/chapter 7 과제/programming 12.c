#include <stdio.h>

int main() {
	int i, num = 0;

	for (i = 1; i > 0 && i < 50;) {
		printf("막대의 높이(종료: -1) : ");
		scanf_s("%d", &num);
		for (int j = 1; j <= num; j++)
			printf("*");
		if (num == -1)
			break;
		printf("\n");
	}
}