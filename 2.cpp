#include<stdio.h>
int main(void)
{
	int height,length,width,volume,weight;
	 height=8;
	 length=12;
	 width=10;
	 volume=height*length*width;
	 weight=(volume+165)/166;
	 
	 printf("容积:%dx%dx%dx\n",length,width,height);
	 printf("体积(cubic inches):%d\n",volume);
	 printf("重量(pounds):%d\n",weight);
	 
	 return 0;
}
