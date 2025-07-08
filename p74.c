#include<stdio.h>
int string_lastocc(char s[],char ch){
    int count=0,i;
    for(i=0;s[i]!='\0';i++){
        if(s[i]==ch){
            count++;
        }
    }
return count;
}
int main(){
    char str1[20],ch;
    int k,n;
    n=sizeof(str1)/sizeof(str1[0]);
    printf("Enter the 1st string:");
    scanf("%[^\n]",str1);
    getchar();
    printf("Enter the character needed to counted in a string:");
    scanf("%c",&ch);
     k=string_lastocc(str1,ch);
    printf("The count of character given is:%d",k);
}
