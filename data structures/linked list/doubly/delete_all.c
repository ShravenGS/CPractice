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
        printf("\nEmpty linked list\n");
        return;
    }
    printf("\n");
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
}


void delete_all(struct st **ptr){
    struct st *temp;
    while(*ptr!=0){
        temp=*ptr;
        *ptr=temp->next;
        if(*ptr!=NULL){
            (*ptr)->prev=NULL;
        }
        free(temp);
    }
}

int main(){
    struct st *hptr=NULL;
    int op,n;
    do{
        add_end(&hptr);
        printf("Do you want to add more:\n");
        scanf("%d",&op);
    }while(op==1);
    print(hptr);
    delete_all(&hptr);
    print(hptr);
    
}
