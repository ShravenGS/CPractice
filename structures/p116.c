#include<stdio.h>
struct st{
	int roll;
	char name[50];
	float marks;
};
void print(struct st *p){
	printf("%d %s %f",p->roll,p->name,p->marks);
}
void scan(struct st *p){
	scanf("%d %s %f",&p->roll,p->name,&p->marks);
}
int main(){
	struct st s;
	printf("Enter the roll, name, marks.....\n");
	scan(&s);
	print(&s);
}
