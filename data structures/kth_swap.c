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

void kth_swap(struct st *ptr,int k){
	int c=count(ptr),temp,i,j;
	struct st *first=ptr,*second=ptr;
	if((k>c)||(k<=0)){
		printf("Invalid");
		return;
	}

	if(2*k-1==c){
		return;
	}
	
	for(i=1;i<k;i++){
		first=first->next;
	}

	for(j=1;j<c-k+1;j++){
		second=second->next;
	}

		temp=first->data;
		first->data=second->data;
		second->data=temp;
}


void print(struct st *ptr){
	while(ptr!=0){
		printf("%d\t",ptr->data);
		ptr=ptr->next;
	}
}


int main(){
	int op,k;
	struct st *hptr=NULL;
	do{
		add_end(&hptr);
		printf("Do you want to add more\n");
		scanf("%d",&op);
	}while(op==1);
	print(hptr);
	printf("Which index we need to swap(kth)");
	scanf("%d",&k);
	kth_swap(hptr,k);
	print(hptr);
}
