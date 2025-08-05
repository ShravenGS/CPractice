#include<stdio.h>
struct student{
	int roll;
	char name[50];
	float marks;
	struct student *p;
};
int main(){
	struct student s1={10,"aaa",70},s2={20,"bbb",80};
	s1.p=&s2;
	printf("%p",&s1.p);
	printf("%d %s %f %p",s1.roll,s1.name,s1.marks,&s2);
}
