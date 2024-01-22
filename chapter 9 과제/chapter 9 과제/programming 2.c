#include <stdio.h>
#include <stdlib.h>

int get_dice_face(void);

int main(void) {
	srand((unsigned int)time(NULL));

	get_dice_face();

	return 0;
}

int get_dice_face(void){
	int num, dice_1=0, dice_2=0, dice_3=0, dice_4=0, dice_5=0, dice_6=0;

	for (int i = 0; i < 100; i++) {
		num = rand() % 6 + 1;

		if (num == 1) dice_1++;
		else if (num == 2) dice_2++;
		else if (num == 3) dice_3++;
		else if (num == 4) dice_4++;
		else if (num == 5) dice_5++;
		else dice_6++;
	}

	printf("1 -> %d\n", dice_1);
	printf("2 -> %d\n", dice_2);
	printf("3 -> %d\n", dice_3);
	printf("4 -> %d\n", dice_4);
	printf("5 -> %d\n", dice_5);
	printf("6 -> %d\n", dice_6);
}