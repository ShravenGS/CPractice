#include<stdio.h>
#include<stdlib.h>
struct bank{
    int acc;
    char name[50];
    float balance;
};
struct bank bankhold(){
    struct bank temp;
    
        printf("\nEnter details");
        printf("Account Number:");
        scanf("%d",&temp.acc);
        getchar();
        printf("Name:");
        scanf(" %[^\n]",temp.name);//space before format specifier
        printf("Balance:");
        scanf("%f",&temp.balance);
    return temp;
}

int main(){
    int n,i;
    struct bank *b;
    printf("Enter the number of bank accounts:");
    scanf("%d",&n);
    
    b=(struct bank *)malloc(n*sizeof(struct bank));
    if(b==NULL){
        printf("Memeory allocation failed");
        return 1;
    }
    
    for(i=0;i<n;i++){
        b[i]=bankhold();
    }
    
     printf("\n--- Account Details ---\n");
     for (i=0;i<n;i++) {
        printf("Acc No: %d | Name: %s | Balance: ₹%.2f\n", b[i].acc, b[i].name, b[i].balance);
    }
    free(b);
    return 0;
}
