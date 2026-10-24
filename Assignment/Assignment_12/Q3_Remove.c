#include<stdio.h>
#include<string.h>

int main() {
	char str[100];
	int n;

	printf("Enter a String: ");
	scanf("%s",str);

	printf("Enter index to remove: ");
	scanf("%d",&n);

	for(int i = n; i < strlen(str); i++) {
		str[i] = str[ i + 1];
	}
	printf("String after removal: %s",str);
}