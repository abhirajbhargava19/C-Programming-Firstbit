#include <stdio.h>

void reverse(int arr[], int size) {
	int temp;

	for (int i = 0; i < size / 2; i++) {
		temp = arr[i];
		arr[i] = arr[size - 1 - i];
		arr[size - 1 - i] = temp;
	}
}

void display(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
}
int main() {
	int arr[] = {1, 2, 3, 4, 5, 6};
	int size = 6;

	printf("Original array: ");
	display(arr, size);

	reverse(arr, size);
	printf("\nReversed array: ");
	display(arr, size);
	return 0;
}