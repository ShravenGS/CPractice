#include<stdio.h>
struct st{
	int x;
	char ch;
};
int main(){
	struct st v;
	struct st *p=&v;
	
	printf("Enter x and ch:");

	//scanf("%d %c",&v.x,&v.ch);
	//printf("%d %c",v.x,v.ch);
	
	//scanf("%d %c",&(*p).x,&(*p).ch);
	//printf("%d %c",(*p).x,(*p).ch);
	
	scanf("%d %c",&p->x,&p->ch);
	printf("%d %c",p->x,p->ch);
	return 0;
}
