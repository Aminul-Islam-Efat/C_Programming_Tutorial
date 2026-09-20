#include <stdio.h>

int main() {
    int unit;
    printf("Enter the unit = ");
    scanf("%d", &unit);

    if (unit <= 100) {
        printf("Amount of money = %d", unit * 5);
    } else if (unit <= 200) {
        printf("Amount of money = %d", (100 * 5) + ((unit - 100) * 8));
    } else {
        printf("Amount of money = %d", (100 * 5) + (100 * 8) + ((unit - 200) * 10));
    }

    return 0;
}
