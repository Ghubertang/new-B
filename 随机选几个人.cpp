#include<stdio.h>
#include<stdlib.h>
int main(void)
{
   int a,b,c,d;
   printf("Enter how many you want:");
   scanf("%d",&b);
   printf("你的范围是0到多少：");
   scanf("%d",&d); 
   printf("下面是您摇到的%d个人\n",b);
    srand(c);
   for(a = 0; a < b; a++)
   {
   	printf("%d\n",rand()%d);
	} 
	return 0;
} 
