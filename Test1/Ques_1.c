#include<stdio.h>

int main()
{
	int hh, min,sec;
	long total_sec;
	
	printf("Enter hours,min,sec :");
	scanf("%d,%d,%d",&hh,&min,&sec);
	
	total_sec = (hh*3600L)+ (min*60) + sec;
	
	printf("Total time in sec %1d\n",total_sec);
		
}