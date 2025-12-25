#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[300], word[50];
    int i = 0, j, count = 0;

    printf("Enter a sentence: ");
    fgets(s, sizeof(s), stdin);

    while (s[i] != '\0') {
        while (s[i] != '\0' && isspace((unsigned char)s[i])) i++;
        if (s[i] == '\0' || s[i] == '\n') break;
        j = 0;
        while (s[i] != '\0' && !isspace((unsigned char)s[i]) && s[i] != '\n') {
            word[j++] = tolower((unsigned char)s[i]);
            i++;
        }
        word[j] = '\0';

        if (!strcmp(word, "a") || !strcmp(word, "an") || !strcmp(word, "the")) {
            printf("Article found: %s\n", word);
            count++;
        }
    }

    printf("Total articles = %d\n", count);
    return 0;
}
