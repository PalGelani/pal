#include <stdio.h>

int main() {
    char note1[40], note2[40], concatenated_string[90], reversed_note1[40], reversed_note2[40], copied_note1[40], copied_note2[40];
    int choice, length1 = 0, length2 = 0, i, j;

    printf("Enter your notes below:\nNote 1-");
    fgets(note1, sizeof(note1), stdin);
    if(note1[strlen(note1) - 1] == '\n')
        note1[strlen(note1) - 1] = '\0';

    printf("Note 2-");
    fgets(note2, sizeof(note2), stdin);
    if(note2[strlen(note2) - 1] == '\n')
        note2[strlen(note2) - 1] = '\0';

    printf("\nPress 0-5 for performing the respective operation:\n");
    printf("0 - Exit\n1 - Length of the strings\n2 - Reversing the notes\n3 - Comparing two notes\n4 - Copying notes\n5 - Concatenating two notes\n");

    while (1) {
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        getchar();

        switch (choice) {
            case 1:
                length1 = 0;
                while (note1[length1] != '\0') {
                    length1++;
                }
                printf("Length of \"%s\" is %d.\n", note1, length1);

                length2 = 0;
                while (note2[length2] != '\0') {
                    length2++;
                }
                printf("Length of \"%s\" is %d.\n", note2, length2);
                break;

            case 2:
                length1 = 0;
                while (note1[length1] != '\0') {
                    length1++;
                }
                for (i = 0, j = length1 - 1; j >= 0; i++, j--) {
                    reversed_note1[i] = note1[j];
                }
                reversed_note1[i] = '\0';
                printf("Reversed Note 1 is: %s\n", reversed_note1);

                length2 = 0;
                while (note2[length2] != '\0') {
                    length2++;
                }
                for (i = 0, j = length2 - 1; j >= 0; i++, j--) {
                    reversed_note2[i] = note2[j];
                }
                reversed_note2[i] = '\0';
                printf("Reversed Note 2 is: %s\n", reversed_note2);
                break;

            case 3:
                for (i = 0; note1[i] != '\0' || note2[i] != '\0'; i++) {
                    if (note1[i] != note2[i]) {
                        break;
                    }
                }
                if (note1[i] == '\0' && note2[i] == '\0') {
                    printf("\"%s\" and \"%s\" are the same.\n", note1, note2);
                } else {
                    printf("\"%s\" and \"%s\" are not the same.\n", note1, note2);
                }
                break;

            case 4:
                for (i = 0; note1[i] != '\0'; i++) {
                    copied_note1[i] = note1[i];
                }
                copied_note1[i] = '\0';
                printf("Copied Note 1 is: %s\n", copied_note1);

                for (i = 0; note2[i] != '\0'; i++) {
                    copied_note2[i] = note2[i];
                }
                copied_note2[i] = '\0';
                printf("Copied Note 2 is: %s\n", copied_note2);
                break;

            case 5:
                for (i = 0; note1[i] != '\0'; i++) {
                    concatenated_string[i] = note1[i];
                }
                concatenated_string[i] = ' ';
                i++;
                for (j = 0; note2[j] != '\0'; j++, i++) {
                    concatenated_string[i] = note2[j];
                }
                concatenated_string[i] = '\0';
                printf("Concatenated string is: %s\n", concatenated_string);
                break;

            case 0:
                printf("Exiting the program.\n24ce033_Gelani pal\n");
                return 0;

            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
}
