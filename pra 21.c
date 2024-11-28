#include<stdio.h>
#include <math.h>
float area(float x ,float y,float z)
{

    if(x+y>z && x+z>y && y+z>x)
    {
      float s=(x+y+z)/2;
        float A = sqrt(s*(s-x)*(s-y)*(s-z));
        return A;
    }
    else
    {
        printf("it will not form triangle.");
    }
}
int main()
{
    float a,b,c;
      printf("Enter first side : ");
    scanf("%f",&a);
    printf("Enter second side :");
    scanf("%f",&b);
     printf("Enter third side :");
    scanf("%f",&c);
    float ar= area(a,b,c);
    printf("The area is : %.2f\n",ar);
    printf("24ce033_Gelani pal");
    return 0;
}
