
#include<stdio.h>
int main()
{
int num_items;
float temp;

printf("enter the no of items:");
scanf("%d",&num_items);
float price[num_items];
printf("enter the price of items:\n");
for(int i=0;i<num_items;i++)
{
scanf("%f",&price[i]);
}
for(int i=0;i<num_items;i++)
{
    printf("cost of %d item is:",i+1);
printf("%.2f \n",price[i]);
}

for(int i=0;i<num_items;i++)
{
for(int j=i+1;j<num_items;j++)
{
    if(price[i]>price[j])
    {
temp=price[i];
price[i]=price[j];
price[j]=temp;
    }
}
}
printf("prices in sorted form:\n");
for(int i=0;i<num_items;i++)
{

printf("%.2f \n",price[i]);
}
printf("24ce033_Gelani pal");
}
