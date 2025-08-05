#include<stdio.h>
#include<stdlib.h>
struct student{
	int roll;
	char name[50];
	float mark;
	struct student *p;
};
int main(){
	int i;
	struct student *s[3];
	for(i=0;i<3;i++){
		s[i]= (struct student*)malloc(sizeof(struct student));
	}
	for(i=0;i<3;i++){
		scanf("%d %s %f",&s[i]->roll,s[i]->name,&s[i]->mark);
	}
	s[0]->p=s[1];
	s[1]->p=s[2];
	s[2]->p=NULL;

                printf("%d %s %f\n",s[0]->roll,s[0]->name,s[0]->mark);
		printf("%d %s %f\n",s[0]->p->roll,s[0]->p->name,s[0]->p->mark);
		printf("%d %s %f\n",s[1]->p->roll,s[1]->p->name,s[1]->p->mark);
	for(i=0;i<3;i++){
		free(s[i]);
	}
}


