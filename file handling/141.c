#include <stdio.h>
#include <string.h>

void reverse(char *s) {
    int i, j;
    char t;
    for (i = 0, j = strlen(s) - 1; i < j; i++, j--) {
        t = s[i];
        s[i] = s[j];
        s[j] = t;
    }
}

int main() {
    FILE *src = fopen("input.txt", "r");
    FILE *dest = fopen("output.txt", "w");
    char word[100];
    int c, i = 0;

    if (!src || !dest) return 1;

    while ((c = fgetc(src)) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            if (i > 0) {
                word[i] = '\0';
                reverse(word);
                fputs(word, dest);
                i = 0;
            }
            fputc(c, dest);
        } else {
            word[i++] = c;
        }
    }

    if (i > 0) {
        word[i] = '\0';
        reverse(word);
        fputs(word, dest);
    }

    fclose(src);
    fclose(dest);
    return 0;
}




