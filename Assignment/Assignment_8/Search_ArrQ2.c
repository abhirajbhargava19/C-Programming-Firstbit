#include<stdio.h>

int main(){
	int a[5] = {10,20,30,40,50};
	int n, found = 0;
	
	printf("Enter a Search Array: ");
	scanf("%d",&n);
	
	for(int i = 0; i < 5; i++)
	{
		if(a[i] == n){
		found = 1;
		break;
		}
	}
	if(found){
		printf("Number found");
	}
	else
	printf("Number Not found");
}