#include <stdio.h>

char grade(int score) {
    if (score >= 90) return 'A';
    if (score >= 80) return 'B';
    if (score >= 70) return 'C';
    if (score >= 60) return 'D';
    return 'F';
}

int main(void) {
    int scores[] = {95, 82, 76, 61, 40};
    int n = (int)(sizeof scores / sizeof scores[0]);
    for (int i = 0; i < n; i++)
        printf("score %d → %c\n", scores[i], grade(scores[i]));
    return 0;
}
