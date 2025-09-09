#include <stdio.h>
#include<string.h>
#include<stdlib.h>
struct st{
    int data;
    struct st *next;
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

void delete(struct st **ptr,int n){
    struct st *prev,*temp=*ptr;
    while(temp!=0){
        if(temp->data==n){
            if(*ptr==temp){
                *ptr=temp->next;
                free(temp);
                return;
            }
            else{
                prev->next=temp->next;
                free(temp);
                temp=NULL;
                return;
            }
        }
        else{
            prev=temp;
            temp=temp->next;
        }
    }
    printf("The data doesn't exist");
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
    printf("Data needed to be deleted:");
    scanf("%d",&n);
    delete(&hptr,n);
    print(hptr);
    
}
