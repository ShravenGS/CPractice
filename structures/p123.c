#include<stdio.h>
#include<stdlib.h>
struct student{
	int roll;
	char name[50];
	float marks;
	struct student *p;
};
int main(){
	struct student *temp=(struct student *)malloc(sizeof(struct student));
	struct student *s[3];
	int n=3,i,j;
	printf("Enter the student roll name,marks");
	for(i=0;i<3;i++){
		s[i]=(struct student *)malloc(sizeof(struct student));
		scanf("%d %s %f",&s[i]->roll,s[i]->name,&s[i]->marks);
	}

	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(s[i]->roll>s[j]->roll){
				*temp=*s[i];
				*s[i]=*s[j];
				*s[j]=*temp;
			}
		}
	}
	for(i=0;i<n-1;i++){
		s[i]->p=s[i+1];
	}
	s[n-1]->p=NULL;
	
	for(i=0;i<3;i++){
		printf("%d %s %f\n",s[i]->roll,s[i]->name,s[i]->marks);
	}
	for(i=0;i<n;i++){
	if(s[i]->p!=NULL){
		printf("%d ",s[i]->p->roll);
		}
	else{
		printf("NULL");
		}
	}
	for(i=0;i<n;i++){
		free(s[i]);
	}
	free(temp);
}
