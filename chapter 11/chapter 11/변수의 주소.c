#include <stdio.h>

int main() {
	
	int i = 10; int* pi = &i;
	char c = 69; char* pc = &c;
	float f = 12.3; float* pf = &f;

	printf("i 값 = %u , i의 주소 = %u , 주소의 내용 %d\n", i, pi, *pi);
	printf("i 값 = %d , i의 주소 = %d \n\n", i, pi);

	printf("c 값 = %u , c의 주소 = %u , 주소의 내용 = %d\n", c, pc, *pc);
	printf("c 값 = %d , c의 주소 = %d , 주소의 내용 = %c\n", c, pc, *pc);
	printf("c 값 = %c , c의 주소 = %d \n\n", c, pc);

	printf("f 값 = %.1f , f의 주소 = %u , 주소의 내용 = %0.1f\n", f, pf, *pf);
	printf("f 값 = %.1f , f의 주소 = %d \n\n", f, pf);

	return 0;
}