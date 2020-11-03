#include<stdio.h>
int main(void)
{
	int meisen;
scanf("%d",&meisen);
int f = 0;
int p;
for(int i = 2; i < meisen; i++)
{
	p=meisen%i;
	if(p == 0)
	{
	f++	;
	}
}
printf("%d\n",f);
if(f==0)
{
printf("%d",meisen);
}
return 0;
}
