#include <stdio.h>

int main()
{
	double distance = 149600000;
	double speed = 300000;
	double time;

	printf("���� �ӵ��� %lfkm/s �Դϴ�.\n", speed);
	printf("�¾�� �������� �Ÿ��� %lfkm �Դϴ�.\n", distance);

	time = distance / speed;

	printf("���� ���޽ð��� %lf�� �Դϴ�", time);

	return 0;
}