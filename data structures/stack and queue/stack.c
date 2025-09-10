#include<stdio.h>
#define MAX 5
int stk[MAX];
int top=0;
void push(){
    if (top==MAX){
        printf("Stack overflow...\n");
        return;
    }
    int ele;
    printf("Enter the element to push:");
    scanf("%d",&ele);
    stk[top++]=ele;
}
void pop(){
    if(top==0){
        printf("Stack underflow...\n");
        return;
    }
    printf("%d is popped...\n",stk[top-1]);
    top--;
}
void display(){
    int i;
    if(top==0){
        printf("Stack is empty...\n");
        return;
    }
    for(i=0;i<top;i++){
        printf("%d ",stk[i]);
    }
    printf("\n");
}
int main(){
    int op;
    while(1){
        printf("Enter the option 1)push 2)pop 3) display 4)exit\n");
        scanf("%d",&op);
        
        switch(op){
            case 1:push(); break;
            case 2:pop(); break;
            case 3:display(); break;
            case 4:return 0; break;
            default:printf("Invalid option..."); break;
        }
    }
    return 0;
}
