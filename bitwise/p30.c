#include <stdio.h>
int main() {
    unsigned int num;
    printf("Enter the number: ");
    scanf("%u", &num);

    // reverse bits using for loop
    for (int left = 31, right = 0; left > right; left--, right++) {
        int lbit = (num >> left) & 1;   
        int rbit = (num >> right) & 1;  

        if (lbit != rbit) {             
            num ^= (1 << left);
            num ^= (1 << right);
        }
    }
    printf("Reversed number: %u\n", num);
    return 0;
}
