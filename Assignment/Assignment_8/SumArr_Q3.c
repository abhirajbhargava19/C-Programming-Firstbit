#include<stdio.h>

int main(){
	int a[5] , sum = 0;
	
	printf("Enter 5 Number:\n");

	for(int i = 0; i<5; i++)
	scanf("%d",&a[i]);
	{
		for(int i=0 ; i<5; i++)
		sum = sum + a[i];
	}
	printf("%d",sum);
}