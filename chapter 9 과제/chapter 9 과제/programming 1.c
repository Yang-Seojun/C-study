#include <stdio.h>

int cla(int num1, char c, int num2) {
	static int check_sum = 0, check_sub = 0, check_mul = 0, check_div = 0;

    if (c == '+') {
        printf("덧셈은 총 %d번 실행되었습니다.\n", ++check_sum);
        return (num1 + num2);
    }
    else if (c == '-') {
        printf("뺄셈은 총 %d번 실행되었습니다.\n", ++check_sub);
        return (num1 - num2);
    }
    else if (c == '*') {
        printf("곱셈은 총 %d번 실행되었습니다.\n", ++check_mul);
        return (num1 * num2);
    }
    else if (c == '/') {
        printf("나눗셈은 총 %d번 실행되었습니다.\n", ++check_div);
        return num1 / num2;
    }
    else {
        printf("잘못입력되었습니다.\n");
        return 0;
    }
}

int main(void) {
	int num1, num2;
	char ch;

	printf("연산을 입력하시오 : ");
    scanf_s("%d", &num1);
    getchar();
    scanf_s(" %c %d", &ch, 1, &num2);

    printf("연산의 결과: %d\n", cla(num1, ch, num2));

    return 0;
}