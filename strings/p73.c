#include<stdio.h>
void string_concatenation1(char dest[],char src[]){
    int i,j;
    for(i=0;dest[i]!='\0';i++);
    for(j=0;src[j]!='\0';j++){
        dest[i+j]=src[j];
    }
dest[i+j]='\0';
}
void string_concatenation2(char dest[],char src[],int n){
    int i,j;
    for(i=0;dest[i]!='\0';i++);
    for(j=0;j<n&&src[j]!='\0';j++){
        dest[i+j]=src[j];
    }
dest[i+j]='\0';
}
int main(){
    char str1[20],str2[20],str3[20];
    int n,k,p,q,i;
    n=sizeof(str1)/sizeof(str1[0]);
    printf("Enter the 1st string:");
    scanf("%[^\n]",str1);
    getchar();
    printf("Enter the 2nd string:");
    scanf("%[^\n]",str2);
    /*string_concatenation1(str1,str2);
    printf("The concatenation of the 2 string are:%s",str1);*/
    for(i=0;str1[i]!='\0';i++){
        str3[i]=str1[i];
    }
    str3[i]='\0';
    printf("\nEnter the number of characters needed to concatenate");
    scanf("%d",&k);
     string_concatenation2(str3,str2,k);
    printf("The concatenation of the 2 string are:%s",str3);
}
