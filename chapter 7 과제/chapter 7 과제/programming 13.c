#include <stdio.h>

int main() {
	int i, sum = 0;

	for (i = 0; sum < 10000; i++) {
		sum += i;
		if (sum > 10000) {
			sum -= i;
			i--;
			break;
		}
	}

	printf("1���� %d������ ���� %d�Դϴ�.", i, sum);

	return 0;
}