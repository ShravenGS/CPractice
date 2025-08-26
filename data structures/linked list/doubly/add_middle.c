#include <stdio.h>
#include<string.h>
#include<stdlib.h>
struct st{
    int data;
    struct st *next;
    struct st *prev;
};
void add_middle(struct st **ptr){
    struct st *temp=(struct st *)malloc(sizeof(struct st));
    if(temp==NULL){
        printf("Memory allocation failed");
        return;
    }
    printf("Enter the data:");
    scanf("%d",&temp->data);
    temp->prev=NULL;
    temp->next=NULL;
    if((*ptr==0)||(temp->data<(*ptr)->data)){
        temp->next=*ptr;
        if(*ptr!=NULL){
            (*ptr)->prev=temp;
        }
        *ptr=temp;
    }
    else{
        struct st *last=*ptr;
        while((last->next!=0)&&(temp->data>last->next->data)){
            last=last->next;
        }
        temp->next=last->next;
        temp->prev=last;
        if(last->next!=NULL){
            last->next->prev=temp;
        }
        last->next=temp;
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
        add_middle(&hptr);
        printf("Do you want to add more\n");
        scanf("%d",&op);
    }while(op==1);
    print(hptr);
}
