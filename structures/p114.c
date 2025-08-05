#include<stdio.h>
struct student{
	int roll;
	char name[50];
	float marks;
};
int main(){
	struct student s;
	printf("Enter your roll,name,marks");
	scanf("%d %s %f",&(&s)->roll,(&s)->name,&(&s)->marks);
	printf("%d %s %f",(&s)->roll,(&s)->name,(&s)->marks);
	return 0;
}

