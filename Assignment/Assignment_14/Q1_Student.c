#include<stdio.h>
#include<string.h>

struct student {
	int rollno;
	char name[20];
	int marks;

};
void main() {
	struct	student s1;
	s1.rollno = 101;
	strcpy(s1.name,"Rahul");
	s1.marks = 90;

	printf("Rollno: %d\n",s1.rollno);
	printf("Name: %s\n",s1.name);
	printf("Marks: %d\n",s1.marks);

	struct student s2;
	printf("\nEnter Rollno: ");
	scanf("%d",&s2.rollno);

	printf("Enter Name: ");
	scanf("%s",s2.name);

	printf("Enter Marks:");
	scanf("%d",&s2.marks);

	printf("\n Student s2:\n");
	printf("Rollno: %d\n",s2.rollno);
	printf("Name: %s\n",s2.name);
	printf("Marks: %d\n",s2.marks);
}


