#include <stdio.h>

int cla(int num1, char c, int num2) {
	static int check_sum = 0, check_sub = 0, check_mul = 0, check_div = 0;

    if (c == '+') {
        printf("������ �� %d�� ����Ǿ����ϴ�.\n", ++check_sum);
        return (num1 + num2);
    }
    else if (c == '-') {
        printf("������ �� %d�� ����Ǿ����ϴ�.\n", ++check_sub);
        return (num1 - num2);
    }
    else if (c == '*') {
        printf("������ �� %d�� ����Ǿ����ϴ�.\n", ++check_mul);
        return (num1 * num2);
    }
    else if (c == '/') {
        printf("�������� �� %d�� ����Ǿ����ϴ�.\n", ++check_div);
        return num1 / num2;
    }
    else {
        printf("�߸��ԷµǾ����ϴ�.\n");
        return 0;
    }
}

int main(void) {
	int num1, num2;
	char ch;

	printf("������ �Է��Ͻÿ� : ");
    scanf_s("%d", &num1);
    getchar();
    scanf_s(" %c %d", &ch, 1, &num2);

    printf("������ ���: %d\n", cla(num1, ch, num2));

    return 0;
}