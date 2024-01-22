#include <stdio.h>

int main() {
    int num, i = 0, j;

    printf("정수를 입력하세요: ");
    scanf_s("%d", &num);

    do {
        j = num % 10;
        i = i * 10 + j;
        num /= 10;
    } while (num != 0);

    printf("%d\n", i);

    return 0;
}