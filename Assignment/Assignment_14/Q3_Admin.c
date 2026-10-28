#include<stdio.h>
#include<string.h>

struct Admin {
	int id;
	char name[20];
	int salary;
	int allowance;
};

void main() {
	struct Admin a1,a2;   //First Admin
	a1.id = 100121;
	strcpy(a1.name, "Virat");
	a1.salary = 25000;
	a1.allowance = 1500;

	printf("Id =%d Name =%s Salary =%d Allowance =%d",a1.id, a1.name, a1.salary, a1.allowance);

	printf("\n Enter Id: "); //Second Admin
	scanf("%d",&a2.id);
	printf("Enter Name: ");
	scanf("%d",a2.name);
	printf("Enter Salary: ");
	scanf("%d",&a2.salary);
	printf("Enter Allowance: ");
	scanf("%d",&a2.allowance);

	printf("\n Admin Details:");
	printf("\nId =%d Name =%s Salary =%d Allowance =%d",a2.id, a2.name, a2.salary, a2.allowance);

}
