#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    if (N < 100000 || N > 999999) {
        printf("Normal\n");
        return 0;
    }

    int d1 = N / 100000;
    int d2 = (N / 10000) % 10;
    int d3 = (N / 1000) % 10;
    int d4 = (N / 100) % 10;
    int d5 = (N / 10) % 10;
    int d6 = N % 10;

    int cond2 = (d1 == d6);
    int cond3 = (d1 + d2 + d3) > (d4 + d5 + d6);
    int cond4 = (d1 == 0 || d2 == 0 || d3 == 0 || d4 == 0 || d5 == 0 || d6 == 0);

    if (cond2 && cond3 && cond4) {
        printf("Suspicious\n");
    } else {
        printf("Normal\n");
    }

    return 0;
}
