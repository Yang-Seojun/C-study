#include <stdio.h>

int main()
{
	int n, score;
	double avg, sum = 0;

	printf("���� ���� �Է��Ͻÿ� : ");
	scanf_s("%d", &n);

	for (int i = 0; i < n; i++)
	{
		printf("������ �Է��Ͻÿ� : ");
		scanf_s("%d", &score);	
		sum += score;
	}

	avg = sum / n;

	printf("avg = %.2lf\n", avg);

	(avg >= 80) ? printf("pass\n") : printf("fail\n");

	return 0;\

}