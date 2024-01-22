#include <stdio.h>
#include <Windows.h>

int printMenu() {
	printf("========================\n");
	printf("'c' �����µ����� ȭ���µ��� ��ȭ\n");
	printf("'f' ȭ���µ����� �����µ��� ��ȭ\n");
	printf("'q' ����\n");
	printf("========================\n");
}

double C2F(double c_temp) {
	return 9. * 5. * c_temp + 32;
}

double F2C(double f_temp) {
	return (f_temp - 32.) * 5. / 9.;
}

int main(void) {
	char choice;
	double temp;

	while (1) {
		printMenu();
		printf("�޴����� �����ϼ��� : ");

		choice = getchar();

		if (choice == 'q') break;
		else if (choice == 'c') {
			printf("���� �µ� : ");
			scanf_s("%lf", &temp);
			printf("ȭ���µ� : %lf \n", C2F(temp));
			Sleep(2000);
		}
		else if (choice == 'f') {
			printf("ȭ���µ� : ");
			scanf_s("%lf", &temp);
			printf("�����µ� : %lf \n", F2C(temp));
			Sleep(2000);
		}
		else {
			printf("�ٽ� �Է����ּ���\n");
			Sleep(1000);
		}

		getchar();
		system("cls");
	}

	return 0;
}