#include<stdio.h>
#include<stdlib.h>
struct st{
    int data;
    struct st *next;
};
void push(struct st **top){
    struct st *temp=(struct st *)malloc(sizeof(struct st));
    if(temp==NULL){
        printf("Memory allocation failed...\n");
        return;
    }
    printf("Enter an element to push:");
    scanf("%d",&temp->data);
    
    temp->next=*top;
    *top=temp;
    printf("%d pushed to stack...\n",temp->data);
}
void pop(struct st **top){
    if(*top==NULL){
        printf("Stack underflow...\n");
        return;
    }
    struct st *temp=*top;
    *top=(*top)->next;
    
    printf("Popped....\n");
    free(temp);
}
void display(struct st *top){
    if(top==NULL){
        printf("Stack is empty...");
        return;
    }
    printf("Stack elements...\n");
    struct st*temp=top;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
int main(){
    struct st *top=NULL;
    int op;
    while(1){
        printf("Enter the option 1)push 2)pop 3) display 4)exit\n");
        scanf("%d",&op);
        
        switch(op){
            case 1:push(&top); break;
            case 2:pop(&top); break;
            case 3:display(top); break;
            case 4:return 0; break;
            default:printf("Invalid option..."); break;
        }
    }
    return 0;
}
