#include <stdio.h>
int main() { int n = 4;
for (int i = 1; i <= n; i++) {
for (int j = i; j < n; j++) { printf(" ");
}
char ch = 'A';
for (int j = 1; j <= i; j++) { printf("%c", ch);
ch++;
}
ch--;
for (int j = 1; j < i; j++) { ch--;
printf("%c", ch);
}
printf("\n");
}
printf("24ce033_Gelani pal"); return 0;
}
