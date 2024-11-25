#include <stdio.h>
int main ()
{
long int total_population, total_men,total_women,literate_population,literate_men,literate_women;
total_population=1441981744;
printf("Total population in  year 2024 is %d\n",total_population);
total_women=total_population*(48.4)/100;
printf("Total population of women in 2024 is %d \n",total_women);
total_men=total_population-total_women;
printf("Total population of men in year 2024 is %d\n",total_men);

printf("Literacy rate is 85.95%\n");
literate_men=total_men*(80.95)/100;
printf("Total literate male is %d\n",literate_men);
literate_women=total_women*(62.84)/100;
printf("Total literate female is %d\n",literate_women);
printf("24ce033_Gelani pal");
}
