#include <stdio.h>

void stars(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) putchar('*');
        putchar('\n');
    }
}

int main(void) {
    stars(5);
    return 0;
}
