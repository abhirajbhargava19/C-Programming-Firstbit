#include<stdio.h>
#include<stdlib.h>

int main() {
	int n, m;

	printf("Enter size of first array: ");
	scanf("%d", &n);

	int *arr = (int *)malloc(n * sizeof(int));

	if(arr == NULL) {
		printf("Memory allocation failed");
		return 1;
	}

	printf("Enter first array:\n");
	for(int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	printf("Enter size of second array: ");
	scanf("%d", &m);

	int *brr = (int *)malloc(m * sizeof(int));

	if(brr == NULL) {
		printf("Memory allocation failed");
		free(arr);
		return 1;
	}

	printf("Enter second array:\n");
	for(int i = 0; i < m; i++) {
		scanf("%d", &brr[i]);
	}

	int *crr = (int *)malloc((n + m) * sizeof(int));

	if(crr == NULL) {
		printf("Memory allocation failed");
		free(arr);
		free(brr);
		return 1;
	}
	for(int i = 0; i < n; i++) {
		crr[i] = arr[i];
	}
	for(int i = 0; i < m; i++) {
		crr[n + i] = brr[i];
	}
	printf("Merged array:\n");
	for(int i = 0; i < n + m; i++) {
		printf("%d ", crr[i]);
	}
	free(arr);
	free(brr);
	free(crr);
	return 0;
}
