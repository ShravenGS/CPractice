#include<stdio.h>
struct student{
    int rollNo;
    char name[50];
    float marks;
};
int main(){
   struct student s[9];
   int i;
   for(i=0;i<9;i++){
       printf("Enter roll no, name and marks of the student %d:",i+1);
       scanf("%d",&s[i].rollNo);
       scanf(" %[^\n]",&s[i].name);
       scanf("%f",&s[i].marks);
   }
   printf("The entered data is");
   for(i=0;i<9;i++){
       printf("|%d |%s| |%.2f|\n",s[i].rollNo,s[i].name,s[i].marks);
   }
    return 0;
}
