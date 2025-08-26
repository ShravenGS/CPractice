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
    temp->prev=NULL;
    temp->next=NULL;
    if(*ptr==0){
        *ptr=temp;
    }
    else{
        struct st *last=*ptr;
        while(last->next!=0){
            last=last->next;
        }
        last->next=temp;
        temp->prev=last;
    }
}

void print(struct st *ptr){
    if(ptr==NULL){
        printf("Empty linked list");
        return;
    }
    
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
}

int main(){
    struct st *hptr=NULL;
    int op;
    do{
        add_end(&hptr);
        printf("Do you want to add more\n");
        scanf("%d",&op);
    }while(op==1);
    print(hptr);
}
