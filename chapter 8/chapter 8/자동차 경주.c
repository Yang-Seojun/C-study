#include <stdio.h>
#include <Stdlib.h>
#include <time.h>
#include <Windows.h>

int disp_car(int car_num,int distance){
	printf("CAR %d", car_num);
	for (int i = 0; i < distance / 10; i++) {
		printf("*");
	}
	printf("\n");	
}

int main(void) {
	int car1_dist = 0, car2_dist = 0;

	srand((unsigned int)time(NULL));

	for (int i = 0; i < 20; i++) {
		system("cls");
		car1_dist = rand() % 100;
		car2_dist = rand() % 100;

		disp_car(1, car1_dist);
		disp_car(2, car2_dist);

		Sleep(1000);
	}

	return 0;
}