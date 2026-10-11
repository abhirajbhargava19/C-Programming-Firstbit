#include<stdio.h>

int sum(int a[], int n) {
	int total = 0;

	for(int i=0; i<n; i++)
		total = total + a[i];

	return total;
}
int main() {
	int a[] = {10,20,30,40,50,60};

	int result = sum(a,6);
	printf("Sum = %d",result);
}