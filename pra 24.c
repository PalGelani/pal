#include <stdio.h>

// Define the structure for Book Details
struct BookInfo {
    char name[50];
    char writer[50];
    float cost;
};

int main() {
    struct BookInfo book;


    printf("Enter Book Name: ");
    fgets(book.name, sizeof(book.name), stdin);

    for (int i = 0; book.name[i] != '\0'; i++) {
        if (book.name[i] == '\n') {
            book.name[i] = '\0';
            break;
        }
    }

    printf("Enter Book Writer: ");
    fgets(book.writer, sizeof(book.writer), stdin);

    for (int i = 0; book.writer[i] != '\0'; i++) {
        if (book.writer[i] == '\n') {
            book.writer[i] = '\0';
            break;
        }
    }

    printf("Enter Book Cost: ");
    scanf("%f", &book.cost);


    printf("Book Name: %s\n", book.name);
    printf("Book Writer: %s\n", book.writer);
    printf("Book Cost: %.2f\n", book.cost);

    printf("\n24ce033_Gelani Pal\n");

    return 0;
}
