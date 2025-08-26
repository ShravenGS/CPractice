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



void delete_node(struct st **ptr, int n) {
    struct st *temp = *ptr;

    while (temp != NULL) {
        if (temp->data == n) {
            if (temp == *ptr) {
                *ptr = temp->next;
                if (*ptr != NULL) {
                    (*ptr)->prev = NULL;
                }
            }
            else {
                if (temp->prev != NULL) {
                    temp->prev->next = temp->next;
                }
                if (temp->next != NULL) {
                    temp->next->prev = temp->prev;
                }
            }

            free(temp);
            printf("Node %d deleted\n", n);
            return;
        }
        temp = temp->next;
    }

    printf("Node %d not found\n", n);
}


int main(){
    struct st *hptr=NULL;
    int op,n;
    do{
        add_end(&hptr);
        printf("Do you want to add more\n");
        scanf("%d",&op);
    }while(op==1);
    print(hptr);
    printf("\n");
    printf("Node needed to be deleted:");
    scanf("%d",&n);
    delete_node(&hptr,n);
    printf("\n");
    print(hptr);
}
