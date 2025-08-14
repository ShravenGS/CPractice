#include<stdio.h>
#include<stdlib.h>
struct st{
	int data;
	struct st *next;
};
void add_end(struct st **ptr){
	struct st *temp=(struct st*)malloc(sizeof(struct st));
	printf("Enter the data");
	scanf("%d",&temp->data);
	if(*ptr==NULL){
		temp->next=NULL;
		*ptr=temp;
	}
	else{
		struct st*last=*ptr;
		while(last->next!=NULL){
			last=last->next;
		}
		temp->next=last->next;
		last->next=temp;
	}
}

void delete_node(struct st **ptr,int n){
	struct st *prev,*temp=*ptr;
	while(temp!=0){
		if(temp->data==n){
			if(*ptr==temp){
				*ptr==temp->next;
			}
			else{
				prev->next=temp->next;
			}
			free(temp);
			temp=NULL;
			return;
		}

		else{
			prev=temp;
			temp=temp->next;
		}
	}
	printf("Data does not exist\n");
}


void print(struct st *ptr){
	while(ptr!=0){
		printf("%d\t",ptr->data);
		ptr=ptr->next;
	}
}


int main(){
	int op,n;
	struct st *hptr=NULL;
	do{
		add_end(&hptr);
		printf("Do you want to add more\n");
		scanf("%d",&op);
	}while(op==1);
	print(hptr);
	printf("\n");
	printf("Enter the element you want to delete");
	scanf("%d",&n);
	delete_node(&hptr,n);
	print(hptr);
}
