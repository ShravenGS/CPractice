#include<stdio.h>
int main(){
    char str[20];
    int n,k;
    n=sizeof(str)/sizeof(str[0]);
    printf("Enter the string:");
    scanf("%[^\n]",str);
    printf("\n");
    printf("The string is %s\n",str);
}
