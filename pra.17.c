
#include<stdio.h>
int main()
{
int seats[5][10];
int r=0,c=0,n,k;
printf("WELCOME\n  Book the show fast!\n");
printf("enter the no of seats u want to reserve\n");
scanf("%d",&n);
printf(" You reserved %d seats\n",n);

    for(k=0;k<n;k++)
    {

            printf("Enter the %d  seat you want to reserve:\n",k+1);
    scanf("%d",&r);
    scanf("%d",&c);
printf("your seat %d is:%d\n ",k+1,seats[r][c]);

    }


}

