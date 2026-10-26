#include<stdio.h>
#include<stdlib.h>

int main() {
	int n = 5;
	int *arr = (int *)malloc(n * sizeof(int));

	if(arr == NULL) {
		printf("Memory allocation failed");
		return 1;
	}
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 40;
	arr[4] = 50;

	int search, found = 0;
	printf("Enter a number to search: ");
	scanf("%d",&search);

	for(int i = 0; i < 5; i++) {
		if(arr[i] == n) {
			found = 1;
			break;
		}
	}
	if(found) {
		printf("Number found");
	} else
		printf("Number Not found");
	free(arr);
	return 0;
}