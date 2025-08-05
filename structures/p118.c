#include<stdio.h>
struct st{
	int roll;
	char name[50];
	float marks;
};

int main(){
	int i;
	struct st s[3];
	for(i=0;i<3;i++){
                scanf("%d %s %f",&s[i].roll,s[i].name,&s[i].marks);
        }

	for(i=0;i<3;i++){
		printf("%d %s %f\n",s[i].roll,s[i].name,s[i].marks);
	}



}

