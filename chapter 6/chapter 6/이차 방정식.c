#include <stdio.h>
#include<math.h>

int main() {
	double a, b, c, result;
	
	printf("��� a, ��� b, ��� c�� ���ʴ�� �Է��Ͻÿ� : ");
	scanf_s("%lf %lf %lf", &a, &b, &c);

	if (a == 0) 
		printf("�������� ���� %.2lf�Դϴ�.\n", -c / b);
	else {
		result = b * b - 4.0 * a * c;
		if (result >= 0) {
			printf("�������� ���� %.2lf�Դϴ�.\n", (-b + sqrt(result) / (2.0 * a)));
			printf("�������� ���� %.2lf�Դϴ�.\n", (-b - sqrt(result) / (2.0 * a)));
		}
		else if (result == 0) {
			printf("�������� ���� %.2lf�Դϴ�.\n", -b / (2 * a));
		}
		else  
			printf("�Ǳ��� �������� �ʽ��ϴ�.");
	}

	return 0;
}