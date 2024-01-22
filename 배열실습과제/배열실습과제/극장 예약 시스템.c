#include <stdio.h>
#include <Windows.h>

#define SIZE 10

int main() {
	int i;
	int ans_1;
	int seats[SIZE] = { 0 };
	char ans_2;


	while (1)
	{
		printf("좌석을 예약하시겠습니까?(y 또는 n)");
		scanf_s(" %c", &ans_2);

		if (ans_2 == 'Y' || ans_2 == 'y') {
			printf("-----------------------\n");
			printf("1 2 3 4 5 6 7 8 9 10\n");
			printf("-----------------------\n");

			for (i = 0; i < SIZE; i++) {
				printf("%d ", seats[i]);
			}

			printf("\n");

			printf("몇번째 좌석을 예약하시겠습니까? ");
			scanf_s("%d", &ans_1);

			if (seats[ans_1 - 1] == 0) {
				seats[ans_1 - 1] = 1;
				printf("예약되었습니다.\n");
			}
			else {
				printf("이미 예약된 자리입니다. 다른 좌석을 선택하세요.\n");
			}
		}

		else if (ans_2 == 'n' || ans_2 == 'N') {
			printf("종료합니다.");
			break;
		}
		
		else {
			printf("다시 입력해주세요\n");
		}
	}

	return 0;
}