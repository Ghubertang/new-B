#include<stdio.h>
#include<stdlib.h>
int main(void)
{
   int a,b,c,d;
   printf("Enter how many you want:");
   scanf("%d",&b);
   printf("��ķ�Χ��0�����٣�");
   scanf("%d",&d); 
   printf("��������ҡ����%d����\n",b);
    srand(c);
   for(a = 0; a < b; a++)
   {
   	printf("%d\n",rand()%d);
	} 
	return 0;
} 
