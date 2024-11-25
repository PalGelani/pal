#include <stdio.h>
int main()
{

    int i,j,n_r,n_c;
    printf("Enter the size of table vertically:");
     scanf("%d",&n_r);
     printf("Enter the size of table horizantally:");
    scanf("%d",&n_c);
    printf("Multiplication table(%d x %d)\n",n_r,n_c);
    for(i=1;i<=n_r;i++)
    {

        for(j=1;j<=n_c;j++)
        {

            printf("\t%d",i*j);

            }
            printf("\n");
}
 printf("24ce033_Gelani pal");
}
