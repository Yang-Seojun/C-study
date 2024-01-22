#include <stdio.h>
#include <stdlib.h>

int get_random() {
	static int check = 1;

	if (check == 1) {
		srand((unsigned int)time(NULL));
			
		check++;
	}
	else{
		return rand();
	}
}

int main(void) {
	printf("초기화 실행\n");

	for (int i = 0; i < 3; i++) {
		printf("%d\n", get_random());
	}
}