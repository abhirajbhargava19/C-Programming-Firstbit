#include<stdio.h>

int main() {
	int arr[] = {10,5,25,3,18};
	int n = 5;

	int min = arr[0];
	int max = arr[0];

	for(int i=1; i<n; i++) {
		if(arr[i] < min)
			min = arr[i];

		if(arr[i] > max)
			max = arr[i];
	}
	
	printf("Minimum %d\n",min);
	printf("Maximum %d\n",max);

}