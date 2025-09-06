#include <stdio.h>

// factorial function
int fact(int n) {
    int f = 1;
    for (int i = 1; i <= n; i++) {
        f *= i;
    }
    return f;
}

// check Strong number
int isStrong(int n) {
    int sum = 0, temp = n, rem;
    while (temp != 0) {
        rem = temp % 10;
        sum += fact(rem);
        temp /= 10;
    }
    return (sum == n);
}

int main() {
    int count = 0, num = 1;

    while (1) {
        if (isStrong(num)) {
            count++;
            if (count == 3) {   
                printf("3rd Strong number = %d\n", num);

                int cleared = num & ~(1 << 7); 
                printf("After clearing 3rd bit = %d\n", cleared);
                break;
            }
        }
        num++;
    }

    return 0;
}
