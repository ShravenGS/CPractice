#include <stdio.h>

// function to check perfect number
int isPerfect(int n) {
    int sum = 0;
    for (int i = 1; i <= n/2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    return (sum == n);
}

int main() {
    int count = 0, num = 1;

    while (1) {
        if (isPerfect(num)) {
            count++;
            if (count == 3) {   
                printf("3rd Perfect number = %d\n", num);

                int cleared = num & ~(1 << 3); 
                printf("After clearing 3rd bit = %d\n", cleared);
                break;
            }
        }
        num++;
    }

    return 0;
}
