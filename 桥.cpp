#include<stdio.h>
int main()
{
	int  n,sum;
	int light = 2;
	int temp;
	scanf("%d",&n);
	int num[10];
	for(int i=0; i<n; i++)
	{
		scanf("%d",&num[i]);
	 } 
	for(int j=0; j<n-1;j++)
	{
	for(int i=0; i<n-j-1;i++)
	{
		if(num[i]>num[i+1]){
			temp=num[i];
			num[i]=num[i+1];
			num[i+1]=temp;
		}
	}
	}
	int left[10],right[10];
	for(int i=0; i<n; i++)
	{
		right[i]=num[i];
	}
	for(int p; ;p++)
	{
		if(n<=3){
			break;
		}
	else {
		sum+=right[1];
		sum+=right[0];
		sum+=right[n-1];
		sum+=right[1];
		n-=2;
	}
    }
    if(n%2 != 0) 
		{sum+=right[0];
		sum+=right[1];
		sum+=right[2];
	}
	else
	{
		sum+=right[1];
	}
	
	printf("%d",sum);
	return 0;
 } 
