#include<stdio.h>
#include<math.h>
int main()
{
int a = 2;
int n;
int meisen;
int i;
for(n = 2; n < 41; n++)
{
int res;
res = pow(a,n);
meisen = res - 1;
if(meisen>8192)
{break;
}
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
if(f==0)
{
printf("%d ",meisen);
}
}
return 0;
}
