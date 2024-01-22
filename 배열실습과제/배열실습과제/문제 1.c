#include <stdio.h>

#define SIZE 10

int main() {
	int i;
	int max, min;
	int arr[SIZE] = { 0 };

	for (i = 0; i < SIZE; i++)
		scanf_s("%d", &arr[i]);

	printf("\n\n");
	
	min = arr[0];

	for (i = 0; i < SIZE; i++) {
		if (arr[i] % 2 != 0 && min > arr[i])
			min = arr[i];
	}

	printf("%d ", min);

	max = arr[0];

	for (i = 0; i < SIZE; i++) {
		if (arr[i] % 2 == 0 && max < arr[i])
			max = arr[i];
	}

	printf("%d ", max);

	return 0;
}