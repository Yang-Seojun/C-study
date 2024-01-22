#include <stdio.h>

int main()
{
	int min_h, min_w, gi_h, gi_w;

	printf("민수의 키와 몸무게를 입력하시오 : ");
	scanf_s("%d %d", &min_h, &min_w);

	printf("기영이의 키와 몸무게를 입력하시오 : ");
	scanf_s("%d %d", &gi_h, &gi_w);

	printf("%d\n", (min_h > gi_h && min_w > gi_w) ? 1 : 0);

	return 0;
}