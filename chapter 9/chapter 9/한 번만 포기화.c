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
		printf("hw_init(): ��Ʈ��ũ�� �ʱ�ȭ �ұ��? = ");

		while (1)
		{
			ch = getchar();
			getchar();

			if (ch == 'Y' || ch == 'y') {
				inited = 1;
				printf("hw_init(): ��Ʈ��ũ�� �ʱ�ȭ�մϴ�.\n");
				break;
			}
			else if (ch == 'N' || ch == 'n') {
				printf("hw_init(): ��Ʈ��ũ�� �ʱ�ȭ���� �ʾҽ��ϴ�.\n");
				break;
			}
			else {
				printf("�߸� �Է��Ͽ����ϴ�.\n");
				break;
			}
		}
	}
	else {
		printf("hw_init(): �̹� �ʱ�ȭ�Ǿ����Ƿ� �ʱ�ȭ���� �ʽ��ϴ�.\n");
	}
}