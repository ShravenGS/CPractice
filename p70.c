#include<stdio.h>
void string_copy1(char dest[],char src[]){
    int i;
    for(i=0;src[i]!='\0';i++){
        dest[i]=src[i];
    }
dest[i]='\0';
}
void string_copy2(char dest[],char src[],int n){
    int i;
    for(i=0;(i<n&&src[i]!='\0');i++){
        dest[i]=src[i];
    }
dest[i]='\0';
}
int main(){
    char str1[20],str2[20];
    int n,k;
    n=sizeof(str1)/sizeof(str1[0]);
    printf("Enter the 1st string:");
    scanf("%[^\n]",str1);
    printf("\n");
    printf("Number of characters needed to be copied:");
    scanf("%d",&k);
    printf("The string is %s\n",str1);
    string_copy1(str2,str1);
    printf("The copied string is:%s\n",str2);
    string_copy2(str2,str1,k);
    printf("The n characters copied string is:%s\n",str2);
}
