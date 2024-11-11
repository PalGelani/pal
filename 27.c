#include <stdio.h>
void swapnum(int*x,int*y)
{

    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    return;
}
void main()
{

    int a,b;
    a=100000;
    b=200000;
     printf(" balance in first account is %d \n balance in first accountis %d\n",a,b);
    swapnum(&a,&b);
    printf(" value after swaping:\n");
    printf(" balance in first account is %d \n balance in first account is %d",a,b);
}
