#include <stdio.h>

int main()
{
	//int grade, n;
	//float sum, average;

	//n = 0;
	//sum = 0;
	//grade = 0;

	//printf("���� �Է��� �����Ϸ��� ������ �Է��Ͻÿ�\n");

	//while (grade >= 0)
	//{
	//	printf("������ �Է��Ͻÿ� : ");
	//	scanf_s("%d", &grade);

	//	sum += grade;
	//	n++;
	//}

	//sum -= grade;
	//n--;
	//average = sum / n;
	//printf("������ ����� %f�Դϴ�.\n", average);

	//return 0;

	int n = 0, grade = 0, sum = 0;
	double average;

	while (1)
	{
		printf("�����Է�>>");
		scanf_s("%d", &grade);
		if (grade < 0) break;
		sum += grade;
		n++;
	}

	average = sum / n;

	printf("�հ� %d�̰�, ������ %d�̰�, ��� %.2f �Դϴ�.", sum, n, average);

	return 0;

}