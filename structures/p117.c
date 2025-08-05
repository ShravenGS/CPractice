#include<stdio.h>
struct st{
	int roll;
	char name[50];
	float marks;
};

int main(){
	int i;
	struct st s[3]={
	{10,"aaa",80},
	{20,"bbb",90},
	{30,"ccc",100}
	};
	for(i=0;i<3;i++){
		printf("%d %s %f\n",s[i].roll,s[i].name,s[i].marks);
	}



}

