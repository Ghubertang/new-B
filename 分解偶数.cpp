#include<stdio.h>
#include<math.h>
int zhishu(int num)
{
int i,k=0,p;
	p = sqrt(num);
	for(i = 2;i<=p;i++)
	{
	   if(num%i==0)
	   {
	   	k+=1;
	   }
	}
	if(k==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}


int main()
{

 int n,k;
	scanf("%d",&n);
	
	if(n%2==0&&n>=6)
{
k = n/2;
for(int i = 2;i<=k;i++)
	{
		if(zhishu(i)==1&&zhishu(n-i)==1)
		printf("%d %d\n",i,n-i);
	}

}
else
{
	printf("ERROR\n");
}
return 0;
}
