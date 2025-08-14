#include<stdio.h>
#include<stdlib.h>
struct st{
	int data;
	struct st *next;
};
void add_middle(struct st **ptr){
	struct st *temp=(struct st*)malloc(sizeof(struct st));
	printf("Enter the data");
	scanf("%d",&temp->data);
	if((*ptr==NULL)||(temp->data<(*ptr)->data)){
		temp->next=NULL;
		*ptr=temp;
	}
	else{
		struct st*last=*ptr;
		while((last->next!=NULL)&&(temp->data>(last->next->data))){
			last=last->next;
		}
		temp->next=last->next;
		last->next=temp;
	}
}


void print(struct st *ptr){
	while(ptr!=0){
		printf("%d\t",ptr->data);
		ptr=ptr->next;
	}
}


int main(){
	int op;
	struct st *hptr=NULL;
	do{
		add_middle(&hptr);
		printf("Do you want to add more\n");
		scanf("%d",&op);
	}while(op==1);
	print(hptr);
}
