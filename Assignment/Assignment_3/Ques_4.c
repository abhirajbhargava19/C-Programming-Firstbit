#include<stdio.h>

int main()
{
	int num = 8 ;
	int status =0;
	int i = 2;
	
	while ((i <= num/2) && (status == 0))
	{
		if(num % i == 0)
		{
			status = 1;
		}
		i++;
	}
	if(status == 0)
	printf("prime\n");
	
	else
	printf("not prime\n");
}
