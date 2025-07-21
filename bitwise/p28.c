#include<stdio.h>
int main(){
	int num,i,bit1,bit2,pos1,pos2,result;
	printf("Enter the number");
	scanf("%d",&num);
	printf("Enter the first position");
        scanf("%d",&pos1);
	printf("Enter the second position");
        scanf("%d",&pos2);
	bit1=((num>>pos1)&1);
	bit2=((num>>pos2)&1);
	result=num;
	if(bit1!=bit2){
		result^=(1<<pos1);
		result^=(1<<pos2);
	}
	for(i=31;i>=0;i--){
                printf("%d",(result>>i)&1);
        }

}
