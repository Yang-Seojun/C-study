#include <stdio.h>
#include <math.h>

#define PI 3.141592

double D2R(int degree) {
	double radians;
	
	radians = degree * (PI / 180.);

	return radians;
}

int main(void) {
	double heighe, distance, tree_height, degrees;

	printf("나무까지의 거리: ");
	scanf_s("%lf", &distance);

	printf("측정자의 키(단위: 미터): ");
	scanf_s("%lf", &heighe);

	printf("각도(단위: 도): ");
	scanf_s("%lf", &degrees);

	tree_height = tan(D2R(degrees)) * distance + heighe;
	printf("나무의 높이(단위: 미터): %.2lf", tree_height);

	//도전문제



	return 0;
}