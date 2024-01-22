#include <stdio.h>

int main() {
	char c, num_1, num_2;

	printf("***************\n");
	printf("A---- Add\n");
	printf("S---- Subtract\n");
	printf("M---- Multiply\n");
	printf("D---- Divide\n");
	printf("Q---- Quit\n");
	printf("***************\n");

	do
	{
		printf("연산을 선택하시오 : ");
		scanf_s(" %c", &c);
		printf("두수를 공백으로 분리하여 입력하시오 : ");
		scanf_s("%d %d", &num_1, &num_2);
		if (c == 'a' || c == 'A') {
			printf("%d\n", num_1 + num_2);
		}
		else if (c == 's' || c == 'S') {
			printf("%d\n", num_1 - num_2);
		}
		else if (c == 'm' || c == 'M') {
			printf("%d\n", num_1 * num_2);
		}
		else if (c == 'd' || c == 'd') {
			printf("%d\n", num_1 / num_2);
		}
		else if (c == 'q' || c == 'Q') {
			break;
		}
		else
			printf("다시 입력해주세요.\n");
	} while (1);
}