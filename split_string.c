#include <stdio.h>
#include <string.h>
#include <ctype.h>

void splitString(const char *str, char delimiter) {
    char copy[strlen(str) + 1];
    strcpy(copy, str);

    char *token = strtok(copy, &delimiter);
    while (token != NULL) {
        for (int i = 0; i < strlen(token); i++) {
            if (i == 0) {
                printf("%c", toupper(token[i])); 
            } else {
                printf("%c", token[i]);
            }
        }
        printf(",");
        token = strtok(NULL, &delimiter);
    }
}

int main() {
    char str[] = "rama is a good boy";
    char delimiter = ' ';

    printf("Input string: %s\n", str);
    printf("Delimiter: %c\n", delimiter);
    printf("Output: ");

    splitString(str, delimiter);

    return 0;
}

