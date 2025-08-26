#include <stdio.h>
#include<string.h>
#include<stdlib.h>
struct st{
    int data;
    struct st *next;
    struct st *prev;
};
void add_end(struct st **ptr){
    struct st *temp=(struct st *)malloc(sizeof(struct st));
    if(temp==NULL){
        printf("Memory allocation failed");
        return;
    }
    printf("Enter the data:");
    scanf("%d",&temp->data);
    if(*ptr==0){
    temp->next=*ptr;
    *ptr=temp;
    }
    else{
        struct st *last=*ptr;
        while(last->next!=0){
            last=last->next;
        }
        temp->next=last->next;
        last->next=temp;
    }
}

void print(struct st *ptr){
    if(ptr==NULL){
        printf("Empty linked list");
        return;
    }
    printf("\n");
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->next;
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
    struct st **p=(struct st **)malloc(c*sizeof(struct st*));
    struct st *temp=*ptr;
    
    for(i=0;i<c;i++){
        p[i]=temp;
        temp=temp->next;
    }
    p[0]->next=0;
    p[0]->prev=p[1];
    
    for(i=1;i<c;i++){
        p[i]->next=p[i-1];
        p[c-1]->prev[i+1];
    }
    p[c-1]->next=p[c-2];
    p[c-1]->prev=NULL;
    *ptr=p[i-1];
    free(p);
}

int main(){
    struct st *hptr=NULL;
    int op;
    do{
        add_end(&hptr);
        printf("Do you want to add more:\n");
        scanf("%d",&op);
    }while(op==1);
    print(hptr);
    reverse_link(&hptr);
    print(hptr);
}
