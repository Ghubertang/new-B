#include<stdio.h>
int main()
{
	int num = 10;
	int result = num ++>11 && --num<20;//���Ϊ������ִ���ұ� 
	printf("%d %d",num,result);
}
