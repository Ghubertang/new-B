#include<stdio.h>
int main(void)
{
	int i;
	printf("Enter a number:",i);
	scanf("%d",&i);
	if((i/10)<1)printf("The number %d has 1 digits",i);
	else if((i/100)<1)printf("The number %d has 2 digits",i);
	else if((i/1000)<1)printf("The number %d has 3 digits",i);
	else printf("The number %d has 4 digits",i);
	return 0;
	
 } 
