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
		
