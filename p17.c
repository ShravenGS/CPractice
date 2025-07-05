#include<stdio.h>
int main(){
	int i,j,isPrime;
	for(i=2;i<=1000;i++){
		isPrime=1;
		for(j=2;j<=i/2;j++){
			if(i%j==0){
				isPrime=0;
				break;
			}
		}
			if(isPrime){
				printf("%d\n",i);
			}
	}
}
/*#include<stdio.h>
int main(){
	int i,j,isPrime,num;
	printf("Enter the number:");
	scanf("%d",&num);
	for(i=2;i<=num;i++){
		isPrime=1;
		for(j=2;j<=i/2;j++){
			if(i%j==0){
				isPrime=0;
				break;
			}
		}
			
	}
	if(isPrime){
				printf("It is a prime number");
			}
			else{
			    printf("It is not a prime number");
			}
}
*/
