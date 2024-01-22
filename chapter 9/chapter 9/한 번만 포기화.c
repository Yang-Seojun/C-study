#include <stdio.h>

void init();

int main(void) {
	init();
	init();
	init();

	return 0;
}

void init() {
	static int inited = 0;
	char ch;

	if (inited == 0) {
		printf("hw_init(): 네트워크를 초기화 할까요? = ");

		while (1)
		{
			ch = getchar();
			getchar();

			if (ch == 'Y' || ch == 'y') {
				inited = 1;
				printf("hw_init(): 네트워크를 초기화합니다.\n");
				break;
			}
			else if (ch == 'N' || ch == 'n') {
				printf("hw_init(): 네트워크를 초기화하지 않았습니다.\n");
				break;
			}
			else {
				printf("잘못 입력하였습니다.\n");
				break;
			}
		}
	}
	else {
		printf("hw_init(): 이미 초기화되었으므로 초기화하지 않습니다.\n");
	}
}