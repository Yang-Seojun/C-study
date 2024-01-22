#include <stdio.h>	

extern unsigned random_i();
extern double random_f();

extern int MOD;

int main(void) {
	int i;

	MOD = 32767;

	for (i = 0; i < 10; i++) {
		printf("%d ", random_i());
	}
	printf("\n");

	return 0;
}