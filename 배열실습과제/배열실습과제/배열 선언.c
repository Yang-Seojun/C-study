#include <stdio.h>

int main() {
	int i;
	int socres[5];

	for (int j = 0; j < 5; j++)
		socres[j] = (j + 1) * 10;

	for (i = 0; i < 5; i++)
		printf("socres[%d] = %d\n", i, socres[i]);

	return 0;
}