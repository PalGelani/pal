#include <stdio.h>

int no_stu() {
    int no;
    printf("Enter the number of students: ");
    scanf("%d", &no);
    return no;
}

float sum_grade(int num, float grade[]) {
    float sum = 0;
    printf("Enter the grades of students:\n");
    for (int i = 0; i < num; i++) {
        scanf("%f", &grade[i]);
        printf("marks[%d]: %f\n", i + 1, grade[i]);
        sum += grade[i];
    }
    return sum;
}

float avg(float total_sum, int num) {
    float average = total_sum / num;
    return average;
}

float maximum(float grade[], int num) {
    float max = grade[0];
    for (int i = 1; i < num; i++) {
        if (max < grade[i]) {
            max = grade[i];
        }
    }
    return max;
}

float minimum(float grade[], int num) {
    float min = grade[0];
    for (int i = 1; i < num; i++) {
        if (min > grade[i]) {
            min = grade[i];
        }
    }
    return min;
}

int main() {
    int stu_no = no_stu();
    float grade[100];
    float total_sum = sum_grade(stu_no, grade);
    printf("Total sum of marks of ccp is: %.2f\n", total_sum);
    float total_avg = avg(total_sum, stu_no);
    printf("Average grade is: %.2f\n", total_avg);
    float max_grade = maximum(grade, stu_no);
    printf("The maximum marks is: %.2f\n", max_grade);
    float min_grade = minimum(grade, stu_no);
    printf("The minimum marks is: %.2f\n", min_grade);
    printf("24ce033_Gelani pal");
    return 0;
        }
