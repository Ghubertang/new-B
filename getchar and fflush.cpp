#include<stdio.h>
int main(void)
{
	char ch1,ch2;
	printf("first ��ĸ��");
	ch1 = getchar();
	fflush(stdin);
	printf("the second:");
	ch2 = getchar();
	printf("%c,%c\n",ch1,ch2);
	return 0;
 } 
