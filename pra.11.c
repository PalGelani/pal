 #include <stdio.h>
void main()
{
int user,comp,matchstick=21;
printf("start the  game !\n");
while(matchstick!=1)
{
printf(" your turn :");
scanf("%d",&user);
if( user>0 && user<=4)
{
   comp=5-user;
printf("compouter enterd %d\n",comp);
matchstick= matchstick-comp-user;
printf(" matchstick remaining is %d \n\n",matchstick);
}
else
{
 printf(" enter valid no:\n");
}

}

if(matchstick==1)
{
printf("u lost!\n");
}
printf("24ce033_Gelani pal");
}



