#include <cstring>
#include <iostream>
#include<stdio.h>
using namespace std;
void subset(int list[], int tag[], int n,int len) 
{
    if (n == len)
    {
        printf("-->");
        for (int i = 0; i < len; i++)
        {
            if (tag[i] == 1)
                printf(" %d",list[i]);
        }
        
        printf("\n");
        return;
    }
    tag[n] = 1;
    subset(list, tag, n + 1,len);
	 
    tag[n] = 0;
    subset(list, tag, n + 1,len);
}

int main()
{
    int m;
    scanf("%d",&m);
    while(m--)
    {
        int n;
        scanf("%d",&n);
        int *number = new int[n];
        int *tag = new int[n];
        for (int i = 0; i < n; i++)1 
        {
          scanf("%d",&number[i]);
        }

        subset(number, tag, 0,n);
    }


    return 0;
}
