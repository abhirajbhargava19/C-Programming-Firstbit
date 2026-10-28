#include<stdio.h>
#include<string.h>

struct Hr {
	int id;
	char name[20];
	int salary;
	int commission;
};

void main() {
	struct Hr h1,h2;
	h1.id = 200121;
	strcpy(h1.name,"Kuldeep");
	h1.salary = 15000;
	h1.commission = 1200;

	printf("Id: = %d Name = %s Salary = %d Commission = %d", h1.id, h1.name, h1.salary, h1.commission);

	printf("\n\nEnter Id:");
	scanf("%d",&h2.id);
	printf("Enter Name: ");
	scanf("%s",&h2.name);
	printf("Enter Salary: ");
	scanf("%d",&h2.salary);
	printf("Enter Commission: ");
	scanf("%d",&h2.commission);

	printf("\nHr Details:\n");
	printf("Id = %d Name = %s Salary = %d Commission = %d", h2.id, h2.name, h2.salary, h2.commission);

}