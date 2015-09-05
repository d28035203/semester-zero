/*
 * patterns.c — semester 1 lab
 * Prints a few classic star/number patterns.
 * Written under fluorescent lights, 2015.
 */
#include <stdio.h>

void stars(int n) {
 int i, j;
 printf("\n-- right triangle --\n");
 for (i = 1; i <= n; i++) {
 for (j = 1; j <= i; j++)
 printf("* ");
 printf("\n");
 }
}

void numbers(int n) {
 int i, j;
 printf("\n-- number pyramid --\n");
 for (i = 1; i <= n; i++) {
 for (j = 1; j <= i; j++)
 printf("%d ", j);
 printf("\n");
 }
}

int main(void) {
 int n;
 printf("rows (1-15): ");
 if (scanf("%d", &n) != 1 || n < 1 || n > 15) {
 printf("invalid input\n");
 return 1;
 }
 stars(n);
 numbers(n);
 return 0;
}
