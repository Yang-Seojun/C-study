#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int main(void) {
	time_t start, end;

	start = time(NULL);

	printf("10�ʰ� �Ǹ� ����Ű�� ��������.\n");

	while (1)
	{
		if (_getch());
		break;
	}

	printf("����Ǿ����ϴ�.\n");

	end = time(NULL);

	printf("����� �ð��� %ld�� �Դϴ�.", end - start);

	return 0;

}