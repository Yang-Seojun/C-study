#include <stdio.h>
#include <Windows.h>

long int balance;

int save(void) {
	static long amount = 0;
	
	printf("����� �ݾ��� �Է����ּ��� : ");
	scanf_s("%ld", &amount);

	if (amount >= 0) {
		printf("%d \t\t", amount);
	}
	else {
		printf("\t %d \t", amount);
	}

	balance += amount;
	printf("%d\n", balance);

	printf("�ܰ�� %d�Դϴ�.\n", balance);
}

void print(void) {
	printf("==========================\n");
	printf("�Ա� \t���\t �ܰ�\n");
	printf("==========================\n");
}

int main(void) {
	print();
	save();
	save();
	save();

	return 0;
}