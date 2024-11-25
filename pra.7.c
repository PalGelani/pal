#include <stdio.h>
int main()
{
//r is for raman and s is for suman
long int r_bunglow=120000000,r_car=30000000,r_plot=60000000;
long int s_apartment=110000000,s_hotel=80000000,s_plot=80000000;
long int r_total,s_total;
r_total=r_bunglow+r_car+r_plot;
s_total= s_apartment+s_hotel+s_plot;
printf("Total property of raman is %d\n",r_total);
printf("Total property of suman is %d\n",s_total);
if(r_total>s_total)
{
printf("Raman has more property than Suman.\n");
}
else if(r_total<s_total)
{
printf("Suman has more property than Raman.\n");
}
else
{
printf("both has equal property\n");
}
printf("24ce033_Gelani pal");
}
