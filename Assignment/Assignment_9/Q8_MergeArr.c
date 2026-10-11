#include <stdio.h>

void display(int arr[], int size) {
	printf("Merged array: ");
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
}
int main() {
	int a[] = {1, 2, 3};
	int b[] = {4, 5, 6};
	int c[6];

	for (int i = 0; i < 3; i++) {
		c[i] = a[i];
	}

	for (int i = 0; i < 3; i++) {
		c[i + 3] = b[i];
	}
	display(c, 6);
	return 0;
}