#include <stdio.h>
#include <Windows.h>

long int balance;

int save(void) {
	static long amount = 0;
	
	printf("입출금 금액을 입력해주세요 : ");
	scanf_s("%ld", &amount);

	if (amount >= 0) {
		printf("%d \t\t", amount);
	}
	else {
		printf("\t %d \t", amount);
	}

	balance += amount;
	printf("%d\n", balance);

	printf("잔고는 %d입니다.\n", balance);
}

void print(void) {
	printf("==========================\n");
	printf("입금 \t출금\t 잔고\n");
	printf("==========================\n");
}

int main(void) {
	print();
	save();
	save();
	save();

	return 0;
}