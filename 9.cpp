#include<stdio.h>
int main(void)
{
	unsigned long long a,b,c,d,n;
	
	a=1;
	b=1;
	d=2;
	printf("Eenter the sequence:",n);
	
	while(scanf("%d",&n)!=EOF)
	{
	c=a+b;
	a=b;
	b=c;
	d+=1;
	c =c%2;

	if(c == 0)
	
		printf("odd");
	
	else
		printf("even");
	
	return 0;
}
	
}
 
