#include<stdio.h>

int oddeven(int a[], int n) {

	for(int i=0; i<n; i++) {
		if(a[i] % 2 == 0)
			printf("%d is Even\n",a[i]);
		else
			printf("%d is Odd\n",a[i]);
	}

}
int main() {
	int a[5] = {12,3,45,16,18};
	oddeven(a,5);
	return 0;
}