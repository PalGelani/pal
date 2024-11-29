#include<stdio.h>
#include<string.h>
struct sport
{
struct sport_team
{
char team_name[20];
char sport_type[20];
}t; struct coach
{
char c_Name[10];
int c_Age;
int experiance;
}c;
};
void main()
{
struct sport s[10];
int n,i;
printf("enter number of team:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\nenter the team name: ");
scanf("%s",s[i].t.team_name);
printf("\nenter the sports type:");
scanf("%s",s[i].t.sport_type);
printf("\nenter the coach name: ");
scanf("%s",s[i].c.c_Name);
printf("\nenter the coach age: ");
scanf("%d",&s[i].c.c_Age);
printf("\nenter the coach experiance:");
scanf("%d",&s[i].c.experiance);
}
printf("team information:");
for(i=0;i<n;i++)
{
printf("\n team name:%s",s[i].t.team_name);
printf("\n sports name:%s",s[i].t.sport_type);
printf("\n coach name:%s",s[i].c.c_Name);
printf("\n age of coach:%d",s[i].c.c_Age);
printf("\n experiance of coach:%d",s[i].c.experiance);
}
printf("\n24ce033_Gelani pal");
}
