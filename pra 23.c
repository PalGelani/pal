#include <stdio.h>

int value() {
    int no;
    printf("Enter the number of months: ");
    scanf("%d", &no);
    return no;
}

int saving(int no) {
    int n1, n2, next, total_saving = 0;

    printf("Enter month 1 saving: ");
    scanf("%d", &n1);
    total_saving += n1;

    printf("Enter month 2 saving: ");
    scanf("%d", &n2);
    total_saving += n2;

    for (int i = 3; i <= no; i++) {
        next = n1 + n2;
        printf("Month %d saving: %d\n", i, next);
        total_saving += next;
        n1 = n2;
        n2 = next;
    }

    return total_saving;
}

int main() {
    int duration = value();
    printf("Duration time is %d months\n", duration);
    int total_saving = saving(duration);
    printf("Total saving till last month is: %d\n", total_saving);
    printf("24ce033_Gelani Pal\n");
    return 0;
}
