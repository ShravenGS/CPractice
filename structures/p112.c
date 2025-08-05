#include<stdio.h>
struct student{
	int roll;
	char name[50];
	float marks;
}s={10,"aaa",90};
int main(){
	printf("%d %s %f\n",s.roll,s.name,s.marks);
	printf("%d %s %f\n",(&s)->roll,(&s)->name,(&s)->marks);
	printf("%p %p %p\n",&s.roll,&s.name,&s.marks);
        printf("%p %p %p\n",&(&s)->roll,&(&s)->name,&(&s)->marks);
	return 0;
}



