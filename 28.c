#include <stdio.h>
void main()
{

    int  i,marks[10];
    int distinction=0,first_class=0,pass=0,fail=0;
int *cp;
cp=&marks[0];
    for(i=0;i<10;i++,cp++)
    {
          printf("marks of %d students is:\n",i+1);
        scanf("%d",cp);

    }
cp=&marks[0];
    for(i=0;i<10;i++,cp++)
    {
      if(*cp>=70)
    {
      distinction++;
    }
    else if(*cp>=60 &&*cp<70)
    {
        first_class++;
    }
     else if(*cp>=40&&*cp<60)
    {
        pass++;
    }
     else
    {
        fail++;
    }

    }
    printf("distinction:%d\n",distinction);
    printf("first_class :%d\n",first_class);
    printf("pass:%d\n",pass);
    printf(" fail:%d\n",  fail);



}
