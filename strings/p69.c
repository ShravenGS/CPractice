#include<stdio.h>
int string_length(char s[]){
    int length=0,i;
    for(i=0;s[i]!='\0';i++){
        length++;
    }
    return length;
}
int main(){
    char str[20];
    int n,k;
    n=sizeof(str)/sizeof(str[0]);
    printf("Enter the string:");
    scanf("%[^\n]",str);
    printf("\n");
    printf("The string is %s\n",str);
    k=string_length(str);
    printf("The length of string is:%d",k);
}
