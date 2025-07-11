#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[]){
	char op;
	int result,a,b;
	a=atoi(argv[1]);
	b=atoi(argv[3]);
	op=argv[2][0];
	switch(op) {
        case '+':
            result = a + b;
            printf("Result = %d\n", result);
            break;
        case '-':
            result = a - b;
            printf("Result = %d\n", result);
            break;
        case '*':
            result = a * b;
            printf("Result = %d\n", result);
            break;
        case '/':
            if(b == 0) {
                printf("Error: Division by zero\n");
                return 1;
            }
            result = a / b;
            printf("Result = %d\n", result);
            break;
        case '%':
            if(b == 0) {
                printf("Error: Modulo by zero\n");
                return 1;
            }
            result = a % b;
            printf("Result = %d\n", result);
            break;
        default:
            printf("Invalid operator. Use + - * / %%\n");
    }
}
