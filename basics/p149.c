#include <stdio.h>

// function to check prime
int isPrime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int count = 0, num = 2;

    while (1) {
        if (isPrime(num)) {
            count++;
            if (count == 10) { 
                printf("10th Prime number = %d\n", num);

                int setBit = num | (1 << 3); 
                printf("After setting 3rd bit = %d\n", setBit);
                break;
            }
        }
        num++;
    }

    return 0;
}
