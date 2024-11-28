#include <stdio.h>


struct Coach {
    char name[100];
    int age;
    int exp;
};


struct Sport {
    char name[100];
    char type[100];
    struct Coach coach;
} s[100];

int main() {
    int n = 0, option;
    char name[100];
    int i, j;

    while (1) {
        printf("\nMENU\n");
        printf("1. Add the team\n");
        printf("2. Search the team\n");
        printf("3. Display the team\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &option);
        getchar();

        switch (option) {
            case 1:
                printf("Enter the number of teams: ");
                scanf("%d", &n);
                getchar();

                for (i = 0; i < n; i++) {
                    printf("\nEnter the name of team: ");
                    fgets(s[i].name, sizeof(s[i].name), stdin);
                    s[i].name[strcspn(s[i].name, "\n")] = 0;

                    printf("Enter the name of sport: ");
                    fgets(s[i].type, sizeof(s[i].type), stdin);
                    s[i].type[strcspn(s[i].type, "\n")] = 0;

                    printf("Enter the name of coach: ");
                    fgets(s[i].coach.name, sizeof(s[i].coach.name), stdin);
                    s[i].coach.name[strcspn(s[i].coach.name, "\n")] = 0;

                    printf("Enter the age of coach: ");
                    scanf("%d", &s[i].coach.age);
                    getchar();

                    printf("Enter the number of years of experience of coach: ");
                    scanf("%d", &s[i].coach.exp);
                    getchar();
                }
                break;

            case 2:
                printf("Enter the name of team: ");
                getchar();
                fgets(name, sizeof(name), stdin);
                name[strcspn(name, "\n")] = 0;

                for (i = 0; i < n; i++) {
                    if (strcmp(name, s[i].name) == 0) {
                        printf("\nTeam found:\n");
                        printf("Team Name: %s\n", s[i].name);
                        printf("Sports Type: %s\n", s[i].type);
                        printf("Coach Name: %s\n", s[i].coach.name);
                        printf("Coach Age: %d years\n", s[i].coach.age);
                        printf("Coach Experience: %d years\n", s[i].coach.exp);
                        break;
                    }
                }

                if (i == n) {
                    printf("Name not found.\n");
                }
                break;

            case 3:
                for (i = 0; i < n; i++) {
                    printf("\nTeam %d:\n", i + 1);
                    printf("Team Name: %s\n", s[i].name);
                    printf("Sports Type: %s\n", s[i].type);
                    printf("Coach Name: %s\n", s[i].coach.name);
                    printf("Coach Age: %d years\n", s[i].coach.age);
                    printf("Coach Experience: %d years\n", s[i].coach.exp);
                }
                break;

            case 4:
                printf("You exited the program.\n");
                printf("24ce033_Gelani pal");
                return 0;

            default:
                printf("Invalid input. Please try again.\n");
        }
    }

}
