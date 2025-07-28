#include<stdio.h>
#include<string.h>
struct student{
    int rollNo;
    char name[50];
    float marks;
};
int main(){
   struct student s[3];
   int i,j;
   for(i=0;i<2;i++){
       printf("Enter roll no, name and marks of the student %d:",i+1);
       scanf("%d",&s[i].rollNo);
       scanf(" %[^\n]",&s[i].name);
       scanf("%f",&s[i].marks);
   }
   for(i=0;i<2;i++){
       for(j=i+1;j<2;j++){
           if((s[i].rollNo==s[j].rollNo)&&(strcmp(s[i].name,s[j].name)==0)&&(s[i].marks==s[j].marks)){
               printf("Elements are same");
           }
           else{
               printf("Elements are not equal");
           }
         }
       }
    return 0;
}
