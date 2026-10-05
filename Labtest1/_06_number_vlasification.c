#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    if (N == 0) {
        printf("Type E\n");
    } else if (N > 0 && N % 2 == 0) {
        printf("Type A\n");
    } else if (N > 0 && N % 2 != 0) {
        printf("Type B\n");
    } else if (N < 0 && N % 2 == 0) {
        printf("Type C\n");
    } else {
        printf("Type D\n");
    }

    return 0;
}
