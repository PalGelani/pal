#include <stdio.h>

struct Book {
    int accession_number;
    char title[50];
    char author[50];
    float price;
    int issued;
};

int main() {
    struct Book book;
    int i;


    printf("Enter the accession number: ");
    scanf("%d", &book.accession_number);
    printf("Accession Number: %d\n", book.accession_number);

    while (getchar() != '\n');

    printf("Enter the title of the book: ");
    fgets(book.title, sizeof(book.title), stdin);

    for (i = 0; book.title[i] != '\0'; i++) {
        if (book.title[i] == '\n') {
            book.title[i] = '\0';
            break;
        }
    }
    printf("Title: %s\n", book.title);

    printf("Enter the author of the book: ");
    fgets(book.author, sizeof(book.author), stdin);

    for (i = 0; book.author[i] != '\0'; i++) {
        if (book.author[i] == '\n') {
            book.author[i] = '\0';
            break;
        }
    }
    printf("Author: %s\n", book.author);

    printf("Enter the price of the book: ");
    scanf("%f", &book.price);
    printf("Price: %.2f\n", book.price);

    printf("Enter 1 if the book is issued, 0 otherwise: ");
    scanf("%d", &book.issued);
    printf("Issued: %s\n", book.issued ? "Yes" : "No");

    printf("\nBook Details:\n");
    printf("Accession Number: %d\n", book.accession_number);
    printf("Title: %s\n", book.title);
    printf("Author: %s\n", book.author);
    printf("Price: %.2f\n", book.price);
    printf("Issued: %s\n", book.issued ? "Yes" : "No");
printf("24ce033_Gelani pal");
    return 0;
}
