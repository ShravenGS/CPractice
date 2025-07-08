#include<stdio.h>
int string_length(char s[]) {
    int i = 0;
    while (s[i] != '\0') {
        i++;
    }
    return i;
}
int str_palindrome(char s[]){
    int i,j,len=string_length(s);
    for(i=0;i<len/2;i++){
               if(s[i]!=s[len-i-1]){
                   return 0;
               }
        }
return 1;
}
int main(){
    char str1[20],ch;
    int k,n;
    n=sizeof(str1)/sizeof(str1[0]);
    printf("Enter the 1st string:");
    scanf("%[^\n]",str1);
    getchar();
    //uppercase(str1);
    k=str_palindrome(str1);
    if(k){
        printf("Palindrome");
    }
    else{
        printf("Not a palindrome");
    }
}
