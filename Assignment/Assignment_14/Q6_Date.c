#include<stdio.h>
#include<string.h>

struct Date {
	int date;
	int month;
	int year;
};

void main() {
	struct Date d1 = { 8, 10, 2026};

	printf("Date: %02d/%02d/%04d\n", d1.date, d1.month, d1.year);
}