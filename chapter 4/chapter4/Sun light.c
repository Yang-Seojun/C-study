#include <stdio.h>

int main()
{
	double distance = 149600000;
	double speed = 300000;
	double time;

	printf("빛의 속도는 %lfkm/s 입니다.\n", speed);
	printf("태양과 지구와의 거리는 %lfkm 입니다.\n", distance);

	time = distance / speed;

	printf("빛의 도달시간은 %lf초 입니다", time);

	return 0;
}