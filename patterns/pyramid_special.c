#include <stdio.h>
#include <math.h>

int main() {
    int rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (int i = 0; i < rows; i++) {
        // spaces
        for (int s = 0; s < i * 2; s++)
            printf(" ");

        int base = i + 2;
        char ch = 'A';

        for (int j = 0; j < rows - i; j++) {
            long long val=(int)pow(base, j);
            printf("%d",val);
            if (j<rows-i-1) {
                printf(" %c ", ch++);
            }
        }
        printf("\n");
    }
    return 0;
}
