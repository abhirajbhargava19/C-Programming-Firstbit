#include<stdio.h>
#include<stdlib.h>

int main() {
	int n = 5;

	int *arr = (int *)malloc(n * sizeof(int));
	int *brr = (int *)malloc(n * sizeof(int));
	int *crr = (int *)malloc(n * sizeof(int));

	if(arr == NULL || brr == NULL || crr == NULL) {
		printf("Memory allocation failed");

		free(arr);
		free(brr);
		free(crr);
		return 1;
	}
	arr[0] = 1;
	arr[1] = 2;
	arr[2] = 3;
	arr[3] = 4;
	arr[4] = 5;

	brr[0] = 10;
	brr[1] = 20;
	brr[2] = 30;
	brr[3] = 40;
	brr[4] = 50;

	for(int i = 0; i < 5; i++) {
		crr[i] = arr[i] + brr[i];
	}

	printf("Third array is:\n");
	for(int i = 0; i < 5; i++) {
		printf("%d ", crr[i]);
	}
	free(arr);
	free(brr);
	free(crr);
	return 0;
}
