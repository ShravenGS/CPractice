#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char search[100];
    char line[1000];
    FILE *fs;

    fs = fopen("input.txt", "r");
    if (fs == NULL) {
        printf("Error: could not open file\n");
        return 1;
    }

    printf("Word search: ");
    scanf("%s", search);

    while (fgets(line, sizeof(line), fs) != NULL) {
        if (strstr(line, search) != NULL) {
            printf("%s", line);
        }
    }

    fclose(fs);
    return 0;
}