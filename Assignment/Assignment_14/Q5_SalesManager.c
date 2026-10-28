#include<stdio.h>
#include<string.h>

struct SalesManager {
	int id ;
	char name[20];
	int salary;
	int incentive;
	int target;
};

void main() {
	struct SalesManager sm1, sm2; //First salesmanager
	sm1.id = 10011;
	strcpy(sm1.name,"Vedant");
	sm1.salary = 125000;
	sm1.incentive = 25000;
	sm1.target = 1200000;

	printf("Id = %d Name = %s Salary = %d Incentive = %d Target = %d",
	       sm1.id, sm1.name, sm1.salary, sm1.incentive, sm1.target);

	printf("\n\nEnter Id: "); //Second Manager
	scanf("%d",&sm2.id);
	printf("Enter Name: ");
	scanf("%s",&sm2.name);
	printf("Enter Salary: ");
	scanf("%d",&sm2.salary);
	printf("Enter Incentive: ");
	scanf("%d",&sm2.incentive);
	printf("Enter Target: ");
	scanf("%d",&sm2.target);

	printf("\n SalesManager Details:\n");
	printf("Id = %d Name = %s Salary = %d Incentive = %d Target = %d",
	       sm2.id, sm2.name, sm2.salary, sm2.incentive, sm2.target);
}