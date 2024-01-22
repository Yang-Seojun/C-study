#include <stdio.h>

int main(void) {
	int x, y, result;

	for (x = 1; x <= 9; x++) {
		for (y = 1; y <= 9; y++) {
			result = x * y;
			printf("%d X %d = %d\n", x, y, result);
		}
		printf("\n\n");
	}
}