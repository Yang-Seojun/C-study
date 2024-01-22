#include <stdio.h>

int check_alpha(char c);

int main(void) {
	char ch;

	printf("문자를 입력해주세요 : ");
	ch = getchar();

	check_alpha(ch);
}

int check_alpha(char c) {
	((c > 'a' && c < 'z') || (c > 'A' && c < 'Z') ? printf("%c는 알파벳 문자입니다.", c) : printf("%c는 알파벳 문자가 아닙니다.", c));
}