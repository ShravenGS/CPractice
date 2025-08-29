#include <stdio.h>
#include <string.h>

int main() {
    FILE *src, *temp;
    char word[100], replace[100], buffer[100];

    scanf("%s", word);
    scanf("%s", replace);

    src = fopen("input.txt", "r");
    temp = fopen("output.txt", "w");
    if (!src || !temp) return 1;

    while (fscanf(src, "%99s", buffer) == 1) {
        if (strcmp(buffer, word) == 0)
            fprintf(temp, "%s ", replace);
        else
            fprintf(temp, "%s ", buffer);
    }

    fclose(src);
    fclose(temp);
    return 0;
}
