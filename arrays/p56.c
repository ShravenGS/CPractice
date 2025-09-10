#include <stdio.h>
int main() {
    int a[10], i, j, c;
    int repeated = 0, non_repeated = 0;
    int n = 10; 

    printf("Enter the elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("\nArray elements: ");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n\n");

    for(i = 0; i < n; i++) {
        for(j = 0; j < i; j++) {
            if(a[i] == a[j])
                break;
        }

        if(j == i) { 
            c = 1;
            for(j = i + 1; j < n; j++) {
                if(a[i] == a[j])
                    c++;
            }

            printf("%d ---> %d times\n", a[i], c);

            if(c == 1)
                non_repeated++;
            else
                repeated++;
        }
    }

    printf("\nNumber of repeated elements: %d\n", repeated);
    printf("Number of non-repeated elements: %d\n", non_repeated);

    return 0;
}
