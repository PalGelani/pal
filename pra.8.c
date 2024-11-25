#include <stdio.h>
void main()
{
int food,total;
printf("1. Burger - rs.150\n2. Pizza - rs.200\n3. Pasta - rs.120\n4. Sandwich - rs.100\n5. French Fries - rs.80\n");
printf("order your food!\n",food);
do{

 scanf("%d",&food);
switch(food)
{
    case 0:
    printf("thank you for ordering ,have a good day\n");
    printf("your total bill is %d\n",total);

    break;
    case 1:
    total+=150;
    printf("1. burger = rs.150\n");
    break;
    case 2:
    total+=200;
    printf("2.pizza = rs.200\n");
    break;
    case 3:
    total+=120;
    printf("3. pasta = rs.120\n");
    break;
    case 4:
    total+=100;
    printf("4. sandwich = rs.100\n");
    break;
    case 5:
    total+=80;
    printf("5.french fries = rs.80\n");
    break;
    default:
        printf("invaid!choose correct food\n ");
        break;

}
}while(food!=0);



printf("24ce033_Gelani pal");
return;
}

