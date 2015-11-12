#include <stdio.h>

int main(void) {
    int n = 10;
    long a = 0, b = 1;
    printf("first %d fibonacci numbers:\n", n);
    for (int i = 0; i < n; i++) {
        printf("%ld%s", a, i + 1 == n ? "\n" : " ");
        long next = a + b;
        a = b;
        b = next;
    }
    return 0;
}
