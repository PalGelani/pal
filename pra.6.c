#include <stdio.h>

int main() {
  char op;
  float no_1, no_2;
  printf("Enter an operator (+, -, *, /): ");
  scanf("%c", &op);
  printf("Enter first number: \n");
   scanf("%f", &no_1);
printf("Enter second number: \n");
  scanf("%f", &no_2);

  switch (op) {
    case '+':
      printf("%.1f + %.1f = %.1f\n", no_1, no_2, no_1 +  no_2);
      break;
    case '-':
      printf("%.1f - %.1f = %.1f\n", no_1,  no_2, no_1 -  no_2);
      break;
    case '*':
      printf("%.1f * %.1f = %.1f\n", no_1,  no_2, no_1*  no_2);
      break;
    case '/':
      printf("%.1f / %.1f = %.1f\n", no_1,  no_2, no_1 /  no_2);
      break;
    default:
      printf("Error! operator is not correct");
  }
printf("24ce033_Gelani pal");
  return 0;
}

