#include<stdio.h>
#include<stdlib.h>
struct st{
	int data;
	struct st *next;
};
int count(struct st *ptr){
    int c=0;
    while(ptr!=0){
        c++;
        ptr=ptr->next;
    }
    return c;
}
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

struct st* swap_adjecent(struct st *ptr){
    struct st*curr=ptr->next->next;
    struct st *prev =ptr;
    ptr=ptr->next;
    ptr->next=prev;
    
    while(curr!=0 && curr->next!=0){
        prev->next=curr->next;
        prev=curr;
        struct st*next=curr->next->next;
        curr->next->next=curr;
        curr=next;
    }
    prev->next=curr;
    return ptr;
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
		add_end(&hptr);
		printf("Do you want to add more\n");
		scanf("%d",&op);
	}while(op==1);
	print(hptr);
	printf("\n");
	hptr=swap_adjecent(hptr);
	print(hptr);
}
