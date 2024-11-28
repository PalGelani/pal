#include <stdio.h>
#include <string.h>

void reverseWord(char *word) {
    int len = strlen(word);
    for (int i = len - 1; i >= 0; i--) {
        printf("%c", word[i]);
    }
    printf(" ");
}

int main() {
    FILE *file = fopen("Demo.txt", "r");
    if (file == NULL) {
        printf("Error: Could not open file Demo.txt\n");
        return 1;
    }

    char word[100];
    while (fscanf(file, "%s", word) != EOF) {
        reverseWord(word);
    }

    fclose(file);
    return 0;
}
