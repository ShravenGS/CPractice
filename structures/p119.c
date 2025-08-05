#include<stdio.h>
#include<stdlib.h>
struct student{
	int roll;
	char name[50];
	float marks;
};
int main(){
	int i,n;
	printf("How many datsa you would need to add?");
	scanf("%d",&n);
	struct student *p=(struct student *)malloc(n*sizeof(struct student));
	for(i=0;i<3;i++){
	scanf("%d %s %f",&p[i].roll,p[i].name,&p[i].marks);
	}
	for(i=0;i<3;i++){
        printf("%d %s %f\n",p[i].roll,p[i].name,p[i].marks);
        }
	free(p);
	return 0;
}

