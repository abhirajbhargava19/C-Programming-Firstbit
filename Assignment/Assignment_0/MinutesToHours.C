#include<stdio.h>

int main()
{
    int minutes = 315;
    
 	int hours = minutes/60;
	int remMinutes = minutes%60;
	
	printf("%d,%d", hours, remMinutes);
}