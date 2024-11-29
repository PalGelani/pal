#include<stdio.h>
#include<string.h>
struct authorData
{
char bookTitle[30];
char authorName[15];
float amountOfBook;
};
void main()
{
struct authorData a1,a2 ;
gets(a1.bookTitle);
gets(a1.authorName);
scanf("%f",&a1.amountOfBook);
strcpy(a2.authorName,a1.authorName);
strcpy(a2.bookTitle,a1.bookTitle);
a2.amountOfBook=a1.amountOfBook;
puts(a2.authorName);
puts(a2.bookTitle);
printf("%f",a2.amountOfBook);
printf("\n24ce033_Gelani pal");
}
