#include <stdio.h>

#define SIZE 10

int main() {
	int i;
	int sum = 0;
	float avr;
	int scores[SIZE] = { 0 };

	for (i = 0; i < SIZE; i++) scanf_s("%d", &scores[i]);
	
	for (i = 0; i < SIZE; i++) sum += scores[i];

	avr = (float)sum / SIZE;

	printf("ÃÑÁ¡ = %d\n", sum);
	printf("Æò±Õ = %.1lf\n", avr);

	return 0;
}