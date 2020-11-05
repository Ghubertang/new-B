#include<stdio.h>
int main()
{
	int m,d,y,w,c;
	printf("Enter date(mm/dd/yy):");
	scanf("%d/%d/%d",&m,&d,&y);	
	printf("Dated this %d",d);
	d%=10;
	switch(d){
		case 1: case 21: case 31: printf("st");
		break;
		
		case 2: case 22:printf("nd");
		break;
		
		case 3: case 23:printf("rd");
		break;
		
		default: printf("th");
		break;
	}
	printf(" day of ");
	switch(m){
		case 1:  printf("January");    
		break;
		case 2:  printf("February");   
		break;
		case 3:  printf("March");      
		break;
		case 4:  printf("April");      
		break;
		case 5:  printf("May");        
		break;
		case 6:  printf("June");       
		break;
		case 7:  printf("July");       
		break;
		case 8:  printf("August");     
		break;
		case 9:  printf("September");  
		break;
		case 10: printf("October");    
		break;
		case 11: printf("November");   
		break;
		case 12: printf("December");  
		 break;
	}
	printf(", 20%.2d.\n",y);
     if (m ==1 || m == 2) 
	 {y--;
	 m += 12;
	 }
	c=20;
	 w = (c / 4) - 2 * c + (y + y / 4) + (13 * (m + 1) / 5) + d - 1;
	 while (w < 0) w += 7;
	 w %= 7;
	 printf("这个日期是：星期");
	 switch(w){
	 	 case 0:printf("日");break;
		 case 1:printf("一");break; 
		 case 2:printf("二");break; 
		 case 3:printf("三");break; 
		 case 4:printf("四");break; 
		 case 5:printf("五");break; 
		 case 6:printf("六");break;  
	 }
	 printf("\n"); 
	 return 0;
 } 
