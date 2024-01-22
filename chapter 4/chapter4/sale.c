/*정수형 자료형의 크기를 계산하는 프로그램*/
#include <stdio.h>

int main()
{
	short year = 0;			//0으로 초기화한다
	int sale = 0;
	long total_sale = 0;
	long long large_value;

	year = 10;			//약 3만2천을 넘지 않도록 주의 
	sale = 200000000;		//약 21억을 넘지 않도록 주의
	total_sale = year * sale;		//약 21억을 넘지 않도록 주의  int * shor = int 

	printf("total_slae = %d\n", total_sale);

	return 0;
}