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
		printf("�¼��� �����Ͻðڽ��ϱ�?(y �Ǵ� n)");
		scanf_s(" %c", &ans_2);

		if (ans_2 == 'Y' || ans_2 == 'y') {
			printf("-----------------------\n");
			printf("1 2 3 4 5 6 7 8 9 10\n");
			printf("-----------------------\n");

			for (i = 0; i < SIZE; i++) {
				printf("%d ", seats[i]);
			}

			printf("\n");

			printf("���° �¼��� �����Ͻðڽ��ϱ�? ");
			scanf_s("%d", &ans_1);

			if (seats[ans_1 - 1] == 0) {
				seats[ans_1 - 1] = 1;
				printf("����Ǿ����ϴ�.\n");
			}
			else {
				printf("�̹� ����� �ڸ��Դϴ�. �ٸ� �¼��� �����ϼ���.\n");
			}
		}

		else if (ans_2 == 'n' || ans_2 == 'N') {
			printf("�����մϴ�.");
			break;
		}
		
		else {
			printf("�ٽ� �Է����ּ���\n");
		}
	}

	return 0;
}