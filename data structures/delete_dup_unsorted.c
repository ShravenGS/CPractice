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

struct st* duplicate_sorted(struct st *ptr){
    struct st *curr=ptr;
    struct st *dup;
    while(curr!=0&&curr->next!=0){
        if(curr->data==curr->next->data){
            dup=curr->next;
            curr->next=curr->next->next;
            free(dup);
        }
        else{
            curr=curr->next;
        }
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
		add_end(&hptr);
		printf("Do you want to add more\n");
		scanf("%d",&op);
	}while(op==1);
	print(hptr);
	printf("\n");
	duplicate_sorted(hptr);
	print(hptr);
}
