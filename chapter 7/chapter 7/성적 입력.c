#include <stdio.h>

int main()
{
	//int grade, n;
	//float sum, average;

	//n = 0;
	//sum = 0;
	//grade = 0;

	//printf("성적 입력을 종료하려면 음수를 입력하시오\n");

	//while (grade >= 0)
	//{
	//	printf("성적을 입력하시오 : ");
	//	scanf_s("%d", &grade);

	//	sum += grade;
	//	n++;
	//}

	//sum -= grade;
	//n--;
	//average = sum / n;
	//printf("성적의 평균은 %f입니다.\n", average);

	//return 0;

	int n = 0, grade = 0, sum = 0;
	double average;

	while (1)
	{
		printf("성적입력>>");
		scanf_s("%d", &grade);
		if (grade < 0) break;
		sum += grade;
		n++;
	}

	average = sum / n;

	printf("합계 %d이고, 개수는 %d이고, 평균 %.2f 입니다.", sum, n, average);

	return 0;

}