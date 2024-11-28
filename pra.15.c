
#include <stdio.h>
int main()
{
int no[25],posotive=0,negative=0,odd=0,even=0,i;
for(i=0;i<=24;i++)
{
printf("number %d :",i+1);
scanf("%d",&no[i]);
}
for(i=0;i<=24;i++)
{
if(no[i]%2==0)
{
even++;
}
else
{
odd++;
}

if(no[i]>0)
{
posotive++;
}
else
{
negative++;
}
}
printf("RESULTS:\n");
printf(" total posotive number is %d\n",posotive);
printf(" total negative number is %d\n",negative);
printf(" total even number is %d\n",even);
printf(" total odd number is %d\n",odd);
printf("24ce033_Gelani pal");
}
