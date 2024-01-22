#include <stdio.h>

int main() {
	int month, days;

	while (1)
	{
		printf("달을 입력하시오 : ");
		scanf_s("%d", &month);
		if (month > 0 && month < 13) break;
		else printf("다시 입력해주세요\n");
	}

	switch (month){
	case 2 : 
		days = 28;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		days = 30;
		break;
	default:
		days = 31;
		break;
	}
	printf("%d월의 일수는 %d일 입니다.\n", month, days);

	return 0;
}