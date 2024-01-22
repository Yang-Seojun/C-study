#include <stdio.h>
#include <math.h>

int main() {
	int n;

	printf("===============================\n");
	printf("      n       nÀÇ Á¦°ö         \n");
	printf("===============================\n");

	n = 1;

	while (n <= 10)
	{
		printf("  %5d      %5d\n", n, (int)pow(n, 2));
		n++;
	}

	return 0;

}