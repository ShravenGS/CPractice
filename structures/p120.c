#include<stdio.h>
struct student{
	int roll;
	char name[50];
	float marks;
	int *p;
};
int main(){
	int i;
	struct student s={10,"aaa",90,&s.roll};

	printf("%p\n",&s.roll);
	printf("%d %s %f %d",s.roll,s.name,s.marks,*s.p);
	return 0;
}

