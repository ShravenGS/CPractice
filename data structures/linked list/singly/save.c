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


void save(struct st *ptr){
    FILE *fp=fopen("input.txt","w");
    if(fp==NULL){
        printf("Error opening file\n");
        return;
    }
    while(ptr!=0){
        fprintf(fp,"%d\n",ptr->data);
        ptr=ptr->next;
    }
    fclose(fp);
    printf("\nFile saved\n");
    
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
    save(hptr);
}
