#include<stdio.h>

void prime(int a[], int n){
	for(int i = 0; i < n; i++)
	{
		int j;
		for(j = 2; j<a[i]; j++)
		{
			if(a[i] % j == 0)
			break;
		}
		if(j == a[i])
		printf("%d ",a[i]);
	}
}
int main(){
	int a[6] = {10,7,26,49,9,13};
	printf("Prime Numbers: ");
	prime(a,6);
}