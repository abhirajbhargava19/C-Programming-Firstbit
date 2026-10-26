#include<stdio.h>
#include<stdlib.h>

int main() {
	int n;

	printf("Enter number of elements: ");
	scanf("%d", &n);
	
	int *arr = (int *)malloc(n * sizeof(int));
	
	if(arr == NULL){
		printf("Memory allocation failed");
		return 1;
	}

	printf("Enter elements:\n");
	for(int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	printf("Reverse array is:\n");
	for(int i = n - 1; i >= 0; i--) {
		printf("%d ", arr[i]);
	}
	free(arr);
	return 0;
}
