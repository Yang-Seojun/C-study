#include <stdio.h>

int check_alpha(char c);

int main(void) {
	char ch;

	printf("���ڸ� �Է����ּ��� : ");
	ch = getchar();

	check_alpha(ch);
}

int check_alpha(char c) {
	((c > 'a' && c < 'z') || (c > 'A' && c < 'Z') ? printf("%c�� ���ĺ� �����Դϴ�.", c) : printf("%c�� ���ĺ� ���ڰ� �ƴմϴ�.", c));
}