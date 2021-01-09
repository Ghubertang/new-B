#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int Subsequence(char s[], char t[]) 
  {
     int m,n,i,j;
     n = strlen(s);  
      m = strlen(t); 
      i=0;
     j=0;
     if (m>n)  
    return 0;
    while ((i<m)&&(j<n))
         {
        if(t[i]==s[j])

            i=i+1;
             j=j+1;
            }
    if (strstr(s,t)!=NULL)
     return 1;     
    return 0;
}

int main()
{
	char num[51][51],r,c,n;
	scanf("%d %d",&r,&c);
	for(int i = 1;i<=r;i++)
	{
		scanf("%s",num[i]);
	}
	scanf("%d",&n);
	for(int i = 0;i<n;i++)
	{
		char to1[10];
		gets(to1);
		if(Subsequence(to1, "SR")==1)
		{
			int len = strlen(to1),kong1,kong2;
			for(int j = 0;j<len;j++)
			{
				if(to1[j]=' ');
				kong1 = j;
				
			}
			for(int j = len-1;j>=0;j--)
			{
				if(to1[j]=' ');
				kong2 = j;
				
			}
			char x11[100];
			strcpy(x11,to1+(kong1+1),(kong2-1));
			char x22[100];
			strcpy(x22,to1+(kong2+1),(len-1));
			int x1 = atoi(x11),x2 = atoi(x22);
			char temp[100];
			strcpy(temp,num[x2]);
			strcpy(num[x2],num[x1]);
			strcpy(num[x1],temp);
		}
		else if(Subsequence(to1[i], "SC" )==1)
		{
			int len = strlen(to1),kong1,kong2;
			for(int j = 0;j<len;j++)
			{
				if(to1[j]=' ');
				kong1 = j;
				
			}
			for(int j = len-1;j>=0;j--)
			{
				if(to1[j]=' ');
				kong2 = j;
				
			}
			char x11[100];
			strcpy(x1,to1+(kong1+1),(kong2-1));
			char x22[100];
			strcpy(x2,to1+(kong2+1),(len-1));
			int y1 = atoi(x11)-1,y2 = atoi(x22)-1;
			for(int l = 1;l<=r;l++)
			{
				for(int o = 0;o<c;o++)
				{
					int temp;
					temp = num[i][y2];
					num[i][y2] = num[i][y1];
					num[i][y1] = temp;
				}
			}
		}
		else if(Subsequence(to1[i], "DR" ==1)
		{
			
		}
		else if(Subsequence(to1[i], "DC" ==1)
		{
			
		}
		else if(Subsequence(to1[i], "IR" ==1)
		{
			
		}
		else if(Subsequence(to1[i], "IC" ==1)
		{
			
		}
	}
}
