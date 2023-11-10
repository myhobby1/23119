#include <stdio.h>

   int main (void)
   {
   	int year = 2016;
   	if((year %4 ==0 && year% 100 != 0)|| year % 400==0)
   	{
   		printf("%d는 윤년입니다.\n,year");
	   }
	   else
	   {
	   		printf("%d는 윤년이아닙니다.\n,year");
	   }
	   return 0; 
	    
   }
   
   
