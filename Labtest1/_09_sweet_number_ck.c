#include <stdio.h>

int main() {
    int num, sum = 0;

    while (1) {
        scanf("%d", &num);
        if (num == 0) {
            break;
        }
        sum += num;
    }

    if (sum % 12 == 0 && sum % 15 != 0) {
        printf("sweet\n");
    } else {
        printf("not sweet\n");
    }

    return 0;
}
