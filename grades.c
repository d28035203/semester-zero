/*
 * grades.c — convert subject marks to letter grade.
 * CE first year, internal assessment panic edition.
 */
#include <stdio.h>

char letter(float m) {
 if (m >= 90) return 'A';
 if (m >= 75) return 'B';
 if (m >= 60) return 'C';
 if (m >= 40) return 'D';
 return 'F';
}

int main(void) {
 float m[5], sum = 0;
 int i;
 printf("Enter marks for 5 subjects (0-100):\n");
 for (i = 0; i < 5; i++) {
 printf(" subject %d: ", i + 1);
 if (scanf("%f", &m[i]) != 1 || m[i] < 0 || m[i] > 100) {
 printf("bad marks\n");
 return 1;
 }
 sum += m[i];
 }
 printf("\nAverage: %.2f\n", sum / 5.0f);
 printf("Overall grade: %c\n", letter(sum / 5.0f));
 return 0;
}
