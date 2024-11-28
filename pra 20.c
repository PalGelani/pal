#include <stdio.h>

void greeting()
{
    printf("Welcome to CHARUSAT UNIVERSITY!\n");
    printf("================================\n");

}
//no is number of students.
void students()
{
    int no;
    printf("Enter the number of students:");
    scanf("%d",&no);
    return no;
}
void s_grade(int no_s,float grade[])
{

    printf("Student grade:\n");
    for(i=1;i<=no;i++)
    {
        printf("Enter grade for student %d:",i);
        scanf("%f",&grade[i]);
        printf("Student %d : Grade = %f\n",i,grade[i]);
        if(grade[i]<0 || grade[i]>100)
        {

            printf("Grade must be between  0 to 100");
        }
        for(int i=1;i<=no;i++)
{
    printf("Enter the number of student %d\n",i);
}
    }
}
void avg(int no_s,float grade[])
{
    int sum=0,avg;
for(int i=1;i<=no;i++)
{
   // printf("Enter the number of student %d\n",i);
   // scanf("%d",&grade);
      sum+=grade[i];
      avg=sum/no;
}
 printf("The average grade of student is :%d\n",avg);
}

}

    void main()
{

    greeting();
   int no_s = students();
   float grade[no_s];
  s_grade(no_s,grade);
    avg(students);
}
