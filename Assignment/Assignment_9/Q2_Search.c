#include<stdio.h>

int search(int a[], int n) {

	for(int i = 0; i < 5; i++) {
		if(a[i] == n) {
			return 1;
		}
	}
	return 0;
}

int main() {
	int a[] = {10,20,30,40,50};
	int n;

	printf("Enter a Number: ");
	scanf("%d",&n);

	if(search(a,n)) {
		printf("Number found");
	} else {
		printf("Number not found");
	}
}