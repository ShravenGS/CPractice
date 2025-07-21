#include<stdio.h>
int main(){
	float pi=3.14;
	int r,l,w,area,perimeter;
	printf("Enter the length:");
        scanf("%d",&l);
	printf("Enter the width:");
        scanf("%d",&w);
	/*printf("Enter the number:");
	scanf("%d",&r);
	area=pi*pow(r,2);*/
	//area=l*w;
	//printf("Area:%d",area);
	perimeter=(2*(l+w));
	printf("Perimeter=%d",perimeter);
}

