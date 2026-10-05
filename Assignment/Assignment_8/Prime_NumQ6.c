#include <stdio.h>

int main() {
	int arr[100], n, flag;

	printf("Enter number of elements: ");
	scanf("%d", &n);

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
	return 0;
}
