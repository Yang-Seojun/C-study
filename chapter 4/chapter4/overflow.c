#include <stdio.h>
#include <limits.h>

int main()
{
	short s_money = SHRT_MAX;					//�ִ밪���� �ʱ�ȭ�Ѵ�. 32767
	unsigned short u_money = USHRT_MAX;			//�ִ밪���� �ֱ�ȭ�Ѵ�. 65535

	s_money = s_money + 1;						//�����÷ο� �߻�
	printf("s_money = %d\n", s_money);			//-32767���� ���ư��� 

	u_money = u_money + 2;						//�����÷ο� �߻�
	printf("u_money = %d\n", u_money);			//1���� ���ư���

	return 0;
}