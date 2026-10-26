#include<stdio.h>
#include<stdlib.h>

int main() {
	int n, flag;

	printf("Enter number of elements: ");
	scanf("%d", &n);

	int *arr = (int *)malloc(n * sizeof(int));

	if(arr == NULL) {
		printf("Memory allocation failed");
		return 1;
	}

	printf("Enter elements:\n");
	for(int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	printf("Prime numbers are: ");
	for(int i = 0; i < n; i++) {
		if(arr[i] < 2)
			continue;
		flag = 1;

		for(int j = 2; j < arr[i]; j++) {
			if(arr[i] % j == 0) {
				flag = 0;
				break;
			}
		}
		if(flag == 1)
			printf("%d ", arr[i]);
	}
	free(arr);
	return 0;
}
