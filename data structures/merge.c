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

struct st* merge(struct st *ptr1,struct st *ptr2){
    if(ptr1==0){
        return ptr2;
    }
    if(ptr2==0){
        return ptr1;
    }
    struct st *temp=ptr1;
    while(temp->next!=0){
        temp=temp->next;
    }
    temp->next=ptr2;
    return ptr1;
}

void print(struct st *ptr){
	while(ptr!=0){
		printf("%d\t",ptr->data);
		ptr=ptr->next;
	}
}


int main(){
	int op;
	struct st *hptr1=NULL,*hptr2=NULL,*hptr3;
	do{
		add_end(&hptr1);
		printf("Do you want to add more\n");
		scanf("%d",&op);
	}while(op==1);
	print(hptr1);
	printf("\n");
	do{
		add_end(&hptr2);
		printf("Do you want to add more\n");
		scanf("%d",&op);
	}while(op==1);
	print(hptr2);
	
	hptr3=merge(hptr1,hptr2);
	printf("\n");
	print(hptr3);
}
