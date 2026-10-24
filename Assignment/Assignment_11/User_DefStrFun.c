#include <stdio.h>

void mystrcpy(char a[], char b[]) {
	int i = 0;
	while (b[i] != '\0') {
		a[i] = b[i];
		i++;
	}
	a[i] = '\0';
}

int mystrlen(char a[]) {
	int i = 0;
	while (a[i] != '\0')
		i++;
	return i;
}

int mystrcmp(char a[], char b[]) {
	int i = 0;
	while (a[i] == b[i] && a[i] != '\0')
		i++;
	return a[i] - b[i];
}

void mystrcat(char a[], char b[]) {
	int i = 0, j = 0;
	while (a[i] != '\0')
		i++;
	while (b[j] != '\0') {
		a[i] = b[j];
		i++;
		j++;
	}
	a[i] = '\0';
}

void mystrncpy(char a[], char b[], int n) {
	int i;
	for (i = 0; i < n && b[i] != '\0'; i++)
		a[i] = b[i];
	a[i] = '\0';
}

void mystrupper(char a[]) {
	int i;
	for (i = 0; a[i] != '\0'; i++)
		if (a[i] >= 'a' && a[i] <= 'z')
			a[i] = a[i] - 32;
}

void mystrlower(char a[]) {
	int i;
	for (i = 0; a[i] != '\0'; i++)
		if (a[i] >= 'A' && a[i] <= 'Z')
			a[i] = a[i] + 32;
}

void mystrrev(char a[]) {
	int i = 0, j = mystrlen(a) - 1;
	char temp;
	while (i < j) {
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		i++;
		j--;
	}
}

int mystrstr(char a[], char b[]) {
	int i, j;
	for (i = 0; a[i] != '\0'; i++) {
		for (j = 0; b[j] != '\0' &&
		        a[i+j] == b[j]; j++);
		if (b[j] == '\0')
			return i;
	}
	return -1;
}

int mystrcasecmp(char a[], char b[]) {
	int i = 0, x, y;
	while (a[i] != '\0' && b[i] != '\0') {
		x = a[i];
		y = b[i];
		if (x >= 'A' && x <= 'Z') x += 32;
		if (y >= 'A' && y <= 'Z') y += 32;
		if (x != y) return x - y;
		i++;
	}
	return a[i] - b[i];
}

int mystrchr(char a[], char ch) {
	int i;
	for (i = 0; a[i] != '\0'; i++)
		if (a[i] == ch)
			return i;
	return -1;
}

int mystrrchr(char a[], char ch) {
	int i, pos = -1;
	for (i = 0; a[i] != '\0'; i++)
		if (a[i] == ch)
			pos = i;
	return pos;
}

int mystrncmp(char a[], char b[], int n) {
	int i;
	for (i = 0; i < n; i++) {
		if (a[i] != b[i])
			return a[i] - b[i];
		if (a[i] == '\0')
			return 0;
	}
	return 0;
}

int mystrnstr(char a[], char b[], int n) {
	int i, j;
	for (i = 0; i < n && a[i] != '\0'; i++) {
		for (j = 0; b[j] != '\0' &&
		        i+j < n && a[i+j] == b[j]; j++);
		if (b[j] == '\0')
			return i;
	}
	return -1;
}

void mystrncat(char a[], char b[], int n) {
	int i = 0, j = 0;
	while (a[i] != '\0')
		i++;
	while (j < n && b[j] != '\0') {
		a[i] = b[j];
		i++;
		j++;
	}
	a[i] = '\0';
}

int mystrncasecmp(char a[], char b[], int n) {
	int i, x, y;
	for (i = 0; i < n; i++) {
		x = a[i];
		y = b[i];
		if (x >= 'A' && x <= 'Z') x += 32;
		if (y >= 'A' && y <= 'Z') y += 32;
		if (x != y) return x - y;
		if (a[i] == '\0') return 0;
	}
	return 0;
}

int main() {
	char a[100] = "hello";
	char b[100] = "world";
	char c[100] = "HELLO";

	printf("Length = %d\n", mystrlen(a));

	mystrcpy(b, a);
	printf("Copy = %s\n", b);

	printf("Compare = %d\n", mystrcmp(a, c));

	mystrcat(a, c);
	printf("Concat = %s\n", a);

	mystrncpy(b, "computer", 3);
	printf("N Copy = %s\n", b);

	mystrupper(a);
	printf("Upper = %s\n", a);

	mystrlower(c);
	printf("Lower = %s\n", c);

	mystrrev(a);
	printf("Reverse = %s\n", a);

	printf("Substring position = %d\n",
	       mystrstr("hello world", "world"));

	printf("Case compare = %d\n",
	       mystrcasecmp("HELLO", "hello"));

	printf("First position = %d\n",
	       mystrchr("banana", 'a'));

	printf("Last position = %d\n",
	       mystrrchr("banana", 'a'));

	printf("N Compare = %d\n",
	       mystrncmp("hello", "help", 3));

	printf("N Substring position = %d\n",
	       mystrnstr("hello world", "world", 11));

	mystrcpy(a, "Hi ");
	mystrncat(a, "Friends", 3);
	printf("N Concat = %s\n", a);

	printf("N Case compare = %d\n",
	       mystrncasecmp("HELLO", "hello", 3));

	return 0;
}