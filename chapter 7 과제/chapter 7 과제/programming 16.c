#include <stdio.h>

int main() {
    int num, i = 0, j;

    printf("������ �Է��ϼ���: ");
    scanf_s("%d", &num);

    do {
        j = num % 10;
        i = i * 10 + j;
        num /= 10;
    } while (num != 0);

    printf("%d\n", i);

    return 0;
}