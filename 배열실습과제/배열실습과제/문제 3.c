#include <stdio.h>

#define SIZE 10

int main() {
	int i;
	char arr[SIZE] = { 'a' };

	for (i = 0; i < SIZE; i++) scanf_s(" %c", &arr[i]);
	
	for (i = SIZE - 1; i >= 0; i--) printf("%c ", arr[i]);

	return 0;
}