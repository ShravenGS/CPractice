#include<stdio.h>
struct st{
	int roll;
	char name[50];
	float marks;
};
void print(struct st *p){
	printf("%d %s %f",p->roll,p->name,p->marks);
}
int main(){
	struct st s={10,"aaa",80.45};
	print(&s);
}
