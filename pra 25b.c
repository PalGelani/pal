#include<stdio.h>
#include<string.h>
union bookdetail
{
int accnum;
char booktitle[40];
char a_name[40];
int price;
int flag;
};
void main()
{
union bookdetail b;
printf("\nEnter the accession number:");
scanf("%d",&b.accnum);
printf("\nEnter the book title:");
scanf("%s",&b.booktitle);
printf("\nEnter the author name:");
scanf("%s",&b.a_name);
printf("\nEnter the book price:");
scanf("%d",&b.price);
printf("\nEnter flag 1 or 0(flag = 1 if the book is issued, flag = 0 otherwise):");
scanf("%d",&b.flag);
printf("\nAccession number:%d",b.accnum);
printf("\nBook title:");
printf("\nAuthor name:");
printf("\nBook price:%s",(b.price==1)?"Issued":"Not issued");
printf("\n24ce033_Gelani pal");
}
