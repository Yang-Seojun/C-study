#include <stdio.h>

int main()
{
	int i = 0, n = 1;
	double avr, sum = 0;

	printf("종료하려면 음수를 입력하시오\n");

	while (1)
	{
		printf("성적을 입력하시오 : ");
		scanf_s("%d", &n);
		if (n < 0) break;
		sum += n;
		i++;
	}

	avr = sum / i;

	printf("성적의 평균은 %lf입니다.", avr);

	return 0;

}