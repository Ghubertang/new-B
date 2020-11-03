#include<stdio.h>
int main()
{
	int a, b, n, o, p;
	int d[3] = {n,o,p};
	for(a = 0; a < 3; a++)
	{
		d[a] = a- 10;
	}
	for(b = 0; b < 3; b++)
	{
		printf("%d\n",d[b]);
	}
	 return 0;
}
