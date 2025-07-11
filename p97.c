#include<stdio.h>
void name(int x){
    switch(x){
        case 1:printf("One");
                break;
        case 2:printf("Two");
                break;
        case 3:printf("Three");
                break;
         case 4:printf("Four");
                break;
         case 5:printf("Five");
                break;
         case 6:printf("Six");
                break;
         case 7:printf("Seven");
                break;
         case 8:printf("Eight");
                break;
         case 9:printf("Nine");
                break;
         case 0:printf("Zero");
                break;
        default:printf("No digit");
                break;
    }
}
int main(){
    int x,num,rev=0,temp,rem;
    
    printf("Enter any number");
    scanf("%d",&num);
    temp=num;
    while(temp!=0){
        x=temp%10;
        rev=rev*10+x;
        temp/=10;
    }
    printf("The number entered is:");
    while(rev!=0){
        rem=rev%10;
        name(rem);
        rev/=10;
    }
}
