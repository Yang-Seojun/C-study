#include <stdio.h>

int main() {
	
	int i = 10; int* pi = &i;
	char c = 69; char* pc = &c;
	float f = 12.3; float* pf = &f;

	printf("i �� = %u , i�� �ּ� = %u , �ּ��� ���� %d\n", i, pi, *pi);
	printf("i �� = %d , i�� �ּ� = %d \n\n", i, pi);

	printf("c �� = %u , c�� �ּ� = %u , �ּ��� ���� = %d\n", c, pc, *pc);
	printf("c �� = %d , c�� �ּ� = %d , �ּ��� ���� = %c\n", c, pc, *pc);
	printf("c �� = %c , c�� �ּ� = %d \n\n", c, pc);

	printf("f �� = %.1f , f�� �ּ� = %u , �ּ��� ���� = %0.1f\n", f, pf, *pf);
	printf("f �� = %.1f , f�� �ּ� = %d \n\n", f, pf);

	return 0;
}