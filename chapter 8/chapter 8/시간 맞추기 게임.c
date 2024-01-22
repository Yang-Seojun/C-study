#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int main(void) {
	time_t start, end;

	start = time(NULL);

	printf("10초가 되면 엔터키를 누르세요.\n");

	while (1)
	{
		if (_getch());
		break;
	}

	printf("종료되었습니다.\n");

	end = time(NULL);

	printf("경과된 시간은 %ld초 입니다.", end - start);

	return 0;

}