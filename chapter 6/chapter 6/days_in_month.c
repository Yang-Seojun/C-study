#include <stdio.h>

int main() {
	int month, days;

	while (1)
	{
		printf("���� �Է��Ͻÿ� : ");
		scanf_s("%d", &month);
		if (month > 0 && month < 13) break;
		else printf("�ٽ� �Է����ּ���\n");
	}

	switch (month){
	case 2 : 
		days = 28;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		days = 30;
		break;
	default:
		days = 31;
		break;
	}
	printf("%d���� �ϼ��� %d�� �Դϴ�.\n", month, days);

	return 0;
}