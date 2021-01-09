#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char digit[201],temp,c;
	int n;
    scanf("%d",&n);
    c = getchar();
	fgets(digit,201,stdin);
	int len = strlen(digit);
	   
	   digit[len-1] = '\0';
	
	len = strlen(digit);
	
	for(int j = 0;j<n;j++)
	{
		temp=digit[len-1];
		for(int j = len - 1;j>0;j--)
		{
		digit[j]=digit[j-1];
		} 
		digit[0]=temp;
	}
	printf("%s\n",digit);
}
