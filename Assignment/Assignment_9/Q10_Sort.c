#include <stdio.h>

void sort(int arr[], int size) {
	int temp;

	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - 1 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

void display(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
}

int main() {
	int arr[] = {5, 2, 8, 1, 4};
	int size = 5;

	printf("Original array: ");
	display(arr, size);

	sort(arr, size);
	printf("\nSorted array: ");
	display(arr, size);
	return 0;
}