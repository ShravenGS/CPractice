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

int is_palindrome(struct st *ptr){
    int c=count(ptr);
    int a[c];
    int i=0;
    
    struct st *p=ptr;
    while(p!=0){
        a[i++]=p->data;
        p=p->next;
    }
    for(i=0;i<c/2;i++){
        if(a[i]!=a[c-i-1]){
            return 0;
        }
    }
    return 1;
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
	if(is_palindrome(hptr)){
	    printf("Palindrome");
	}
	else{
	    printf("Not a palindrome");
	}
}
