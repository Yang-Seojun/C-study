#include <stdio.h>
#include <Windows.h>

int printMenu() {
	printf("========================\n");
	printf("'c' 섭씨온도에서 화씨온도로 변화\n");
	printf("'f' 화씨온도에서 섭씨온도로 변화\n");
	printf("'q' 종료\n");
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
		printf("메뉴에서 선택하세요 : ");

		choice = getchar();

		if (choice == 'q') break;
		else if (choice == 'c') {
			printf("섭씨 온도 : ");
			scanf_s("%lf", &temp);
			printf("화씨온도 : %lf \n", C2F(temp));
			Sleep(2000);
		}
		else if (choice == 'f') {
			printf("화씨온도 : ");
			scanf_s("%lf", &temp);
			printf("섭씨온도 : %lf \n", F2C(temp));
			Sleep(2000);
		}
		else {
			printf("다시 입력해주세요\n");
			Sleep(1000);
		}

		getchar();
		system("cls");
	}

	return 0;
}