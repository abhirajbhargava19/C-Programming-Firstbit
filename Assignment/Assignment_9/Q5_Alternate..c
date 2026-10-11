#include<stdio.h>

void alternate(int a[], int n) {
	for(int i = 0; i < n; i = i+2) {
		printf("%d ",a[i]);
	}
}
int main() {
	int a[6] = {12,7,26,49,9,18};
	alternate(a,6);
	return 0;
