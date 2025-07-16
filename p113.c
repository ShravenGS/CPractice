#include<stdio.h>
struct student{
    int rollNo;
    char name[50];
    float marks;
};
void print(struct student s[],int size){
    int i;
     printf("--------------The entered data is------------\n");
   for(i=0;i<size;i++){
       printf("|%d| |%s| |%.2f|\n",s[i].rollNo,s[i].name,s[i].marks);
   }
}
void scan(struct student s[],int size){
    int i;
    for(i=0;i<2;i++){
       printf("Enter roll no, name and marks of the student %d:",i+1);
       scanf("%d",&s[i].rollNo);
       getchar();
       scanf(" %[^\n]",&s[i].name);
       scanf("%f",&s[i].marks);
   }
}
int main(){
   struct student s[2];
   int i;
    scan(s,2);
   print(s,2);

  
    return 0;
}
