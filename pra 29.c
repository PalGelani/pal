#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    int initial_size = 10;
    char *str = (char *)calloc(initial_size, sizeof(char));

    if (str == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }


    printf("Enter a string: ");
    fgets(str, initial_size, stdin);
    str[strcspn(str, "\n")] = 0;


    printf("Entered string: %s\n", str);
    printf("Memory size (initial): %lu \n", initial_size * sizeof(char));


    int new_size = 50;
    str = (char *)realloc(str, new_size * sizeof(char));

    if (str == NULL) {
        printf("Memory reallocation failed\n");
        return 1;
    }


    printf("add string: ");
    fgets(str + strlen(str), new_size - strlen(str), stdin);
    str[strcspn(str, "\n")] = 0;


    printf("Modified string: %s\n", str);
    printf("Memory size (after ): %lu\n", new_size * sizeof(char));

printf("24ce033_Gelani pal");

    return 0;
}
