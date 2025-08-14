#include<stdio.h>
#include<stdlib.h>
#include<string.h>
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

void reverse_data(struct st *ptr){
	int i,j,c=count(ptr);
	int size=sizeof(struct st)-sizeof(struct st*);
	struct st **p=(struct st **)malloc(c*sizeof(struct st*));
	struct st temp;
	for(i=0;i<c;i++){
		p[i]=ptr;
		ptr=ptr->next;
	}
	for(i=0,j=c-1;i<j;i++,j--){
		memcpy(&temp,p[i],size);
		memcpy(p[i],p[j],size);
		memcpy(p[j],&temp,size);
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
	reverse_data(hptr);
	print(hptr);
	printf("\n");
}
