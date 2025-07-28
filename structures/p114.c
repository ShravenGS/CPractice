#include<stdio.h>
struct student{
    int rollNo;
    char name[50];
    float marks;
};
void print(struct student *p,int size){
    int i;
     printf("--------------The entered data is------------\n");
   for(i=0;i<size;i++){
       printf("|%d| |%s| |%.2f|\n",(p+i)->rollNo,(p+i)->name,(p+i)->marks);
       //printf("|%d| |%s| |%.2f|\n",p[i].rollNo,p[i].name,p[i].marks);
   }
}
void scan(struct student *p,int size){
    int i;
    for(i=0;i<2;i++){
       printf("Enter roll no, name and marks of the student %d:",i+1);
       scanf("%d",&(p+i)->rollNo);
       getchar();
       scanf(" %[^\n]",(p+i)->name);
       scanf("%f",&(p+i)->marks);
   }
}
int main(){
   struct student s[2];
   struct student *p=s;
    /* struct student s[2];
   struct student *p;
   p=s;*/
   int i;
    scan(p,2);
   print(p,2);

  
    return 0;
}
