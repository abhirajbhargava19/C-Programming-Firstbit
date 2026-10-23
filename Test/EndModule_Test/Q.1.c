#include<stdio.h>

int main(){
	int n,i, num =0;
	
	printf("Enter a number: ");
	scanf("%d",&n);
	
	for(i=1; i<=n; i++)
	{
		num = num*10+1;
		printf("%d",num);
		
		if(i<n){
			printf(" + ");
		}
	}
}