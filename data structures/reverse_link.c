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

int count(struct st *ptr){
	int c=0;
	while(ptr!=0){
		c++;
		ptr=ptr->next;
	}
	return c;
}

void reverse_link(struct st **ptr){
	int i,c=count(*ptr);
	struct st **p=(struct st**)malloc(c*sizeof(struct st*));
	struct st *temp=*ptr;
	for(i=0;i<c;i++){
		p[i]=temp;
		temp=temp->next;
	}
	p[0]->next=0;
	for(i=1;i<c;i++){
		p[i]->next=p[i-1];
	}
	*ptr=p[i-1];
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
	reverse_link(&hptr);
	print(hptr);
}
