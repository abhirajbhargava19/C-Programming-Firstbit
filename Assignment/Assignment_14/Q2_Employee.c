#include<stdio.h>
#include<string.h>

struct employee {
	int id;
	char name[20];
	int salary;
};

void main() {
	struct	employee emp1;
	emp1.id = 101;
	strcpy(emp1.name, "Rahul");
	emp1.salary = 40000;

	printf("Id: %d\n",emp1.id);
	printf("Name: %s\n",emp1.name);
	printf("Salary: %d\n",emp1.salary);

	struct employee emp2;
	printf("\nEnter Id: ");
	scanf("%d",&emp2.id);

	printf("Enter Name: ");
	scanf("%s",&emp2.name);

	printf("Enter Salary:");
	scanf("%d",&emp2.salary);

	printf("\n Employee Details:\n");
	printf("Id: %d\n",emp2.id);
	printf("Name: %s\n",emp2.name);
	printf("Salary: %d\n",emp2.salary);
}


