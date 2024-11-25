#include <stdio.h>
int main()
{
    float marks;
      printf("enter your marks:");
    scanf("%f",&marks);
    if( marks >= 90)
    {
        printf("you got - Grade A\n");
    }
    else if(marks >= 80 && marks< 90)
    {
        printf("you got -Grade B\n");
    }
   else if(marks >= 70 && marks< 80)
    {
        printf("you got -Grade C\n");
    }
     else if(marks >= 60 && marks< 70)
    {
        printf("you got -Grade D\n");
    }
     else if(marks <= 60)
    {
        printf("you got - Grade F\n");
    }
    else{
        printf("invalid! enter correct marks");
    }
    printf("24ce033_Gelani pal");
}
