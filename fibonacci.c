/*
 * fibonacci.c — iterative Fibonacci printer.
 * Recursive version killed the lab PC. We do not speak of it.
 */
#include <stdio.h>

int main(void) {
 int n, i;
 unsigned long long a = 0, b = 1, t;
 printf("how many terms (1-50)? ");
 if (scanf("%d", &n) != 1 || n < 1 || n > 50) {
 printf("nope\n");
 return 1;
 }
 for (i = 0; i < n; i++) {
 printf("%llu%s", a, (i + 1 < n) ? " " : "\n");
 t = a + b;
 a = b;
 b = t;
 }
 return 0;
}
