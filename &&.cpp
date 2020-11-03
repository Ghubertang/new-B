#include<stdio.h>
int main()
{
	int num = 10;
	int result = num ++>11 && --num<20;//左边为假则不用执行右边 
	printf("%d %d",num,result);
}
