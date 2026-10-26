#include<stdio.h>
#include<stdlib.h>

int main() {
	int n = 5;
	int *arr = (int *)malloc(n* sizeof(int));

	if(arr == NULL) {
		printf("Memory allocation failed");
		return 1;
	}
	int sum = 0;
	printf("Enter 5 Number:\n");

	for(int i = 0; i<n; i++)
		scanf("%d",&arr[i]);
	{
		for(int i=0 ; i<n; i++)
			sum = sum + arr[i];
	}
	printf("Sum = %d",sum);
	free(arr);
}