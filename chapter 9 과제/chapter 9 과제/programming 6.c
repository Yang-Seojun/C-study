#include <stdio.h>

int mul(int base, int power_raised);

int main(void) {
	int num1, num2;
	
	printf("¹Ø¼ö : ");
	scanf_s("%d", &num1);

	printf("Áö¼ö : ");
	scanf_s("%d", &num2);

	printf("%d ^ %d = %d\n", num1, num2, mul(num1, num2));

	return 0; //2 ^ (10 9 8 7 6 5 4 3 2 1)
}

int mul(int base, int power_raised) {
	if (power_raised == 0) return 1;
	else return base * mul(base, power_raised - 1);
}