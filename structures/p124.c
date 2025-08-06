#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student{
        int roll;
        char name[50];
        float marks;
        struct student *p;
};
void sort_roll(struct student *s[], int n){
        struct student temp;
        int i,j;
        for(i=0;i<n;i++){
                for(j=i+1;j<n;j++){
                        if(s[i]->roll>s[j]->roll){
                                temp=*s[i];
                                *s[i]=*s[j];
                                *s[j]=temp;
                        }
                }
        }
}
void sort_name(struct student *s[],int n){
        int i,j;
        struct student temp;
        for(i=0;i<n-1;i++){
                for(j=i+1;j<n;j++){
                        if(strcmp(s[i]->name,s[j]->name)>0){
                                temp=*s[i];
                                *s[i]=*s[j];
                                *s[j]=temp;
                        }
                }
        }
}

void sort_topper(struct student *s[], int n){
        struct student temp;
        int i,j;
        for(i=0;i<n;i++){
                for(j=i+1;j<n;j++){
                        if(s[i]->marks<s[j]->marks){
                                temp=*s[i];
                                *s[i]=*s[j];
                                *s[j]=temp;
                        }
                }
        }
 printf("%d %s %f------>Topper",s[0]->roll,s[0]->name,s[0]->marks);
}

int main(){
        struct student *s[10];
        int n,i,j,choice;
        printf("Enter how many numbers we need to add?");
        scanf("%d",&n);
        for(i=0;i<n;i++){
                s[i]=(struct student *)malloc(sizeof(struct student));
        }
        for(i=0;i<n;i++){
                scanf("%d %s %f",&s[i]->roll,s[i]->name,&s[i]->marks);
        }
        printf("1. Sort roll number \n 2. Sort name \n 3. Chck the topper student\n");
        printf("Choose the option:");
        scanf("%d",&choice);

        switch(choice){
                case 1:sort_roll(s,n);
                       break;
                case 2:sort_name(s,n);
                       break;
                case 3:sort_topper(s,n);
                       break;
                default:printf("Enter the proper option");
                        break;
        }
        for(i=0;i<n-1;i++){
                s[i]->p=s[i+1];
        }
        s[i]->p=NULL;

        printf("\n");
        if(choice>=1&&choice<=3){
                for(i=0;i<n;i++){
                        printf("%d %s %f\n",s[i]->roll,s[i]->name,s[i]->marks);
                }
        }

        printf("\n");


        for(i=0;i<n;i++){
                if(s[i]->p!=NULL){
                        printf("%d %s %f\n",s[i]->p->roll,s[i]->p->name,s[i]->p->marks);
                }
                else{
                        printf("NULL\n");
                }
        }

        for(i=0;i<n;i++){
                free(s[i]);
        }
}
