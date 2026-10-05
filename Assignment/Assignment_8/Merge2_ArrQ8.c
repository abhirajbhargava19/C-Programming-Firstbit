#include <stdio.h>

int main() {
	int arr[100], brr[100], crr[200];
	int n, m;

	printf("Enter size of first array: ");
	scanf("%d", &n);

	printf("Enter first array:\n");
	for(int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	printf("Enter size of second array: ");
	scanf("%d", &m);

	printf("Enter second array:\n");
	for(int i = 0; i < m; i++) {
		scanf("%d", &brr[i]);
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
	return 0;
}
