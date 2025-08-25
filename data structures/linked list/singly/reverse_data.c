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


void reverse_data(struct st *ptr){
    int i,j,c=count(ptr);
    struct st temp;
    int size=sizeof(struct st)-sizeof(struct st*);
    struct st **p=(struct st **)malloc(sizeof(struct st *));
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

int main(){
    struct st *hptr=NULL;
    int op;
    do{
        add_end(&hptr);
        printf("Do you want to add more:\n");
        scanf("%d",&op);
    }while(op==1);
    print(hptr);
    reverse_data(hptr);
    print(hptr);
}
