#include <stdio.h>

int main() {
    int num;

    // User er kashe theke number input newa
    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("\n--- Number Properties Analysis ---\n");

    // 1. Positive, Negative naki Zero check
    if (num > 0) {
        printf("● Positive/Negative : Positive\n");
    } else if (num < 0) {
        printf("● Positive/Negative : Negative\n");
    } else {
        printf("● Positive/Negative : Zero (Neither positive nor negative)\n");
    }

    // 2. Even naki Odd check
    if (num % 2 == 0) {
        printf("● Even/Odd          : Even\n");
    } else {
        printf("● Even/Odd          : Odd\n");
    }

    // 3. Divisibility check (3, 5 ebong Multiple of both)
    if (num % 3 == 0 && num % 5 == 0) {
        printf("● Divisible by 3    : Yes\n");
        printf("● Divisible by 5    : Yes\n");
        printf("● Multiple of 3 & 5 : Yes (Multiple of both 3 and 5)\n");
    } else {
        // Separately 3 dwara divisible kina
        if (num % 3 == 0) {
            printf("● Divisible by 3    : Yes\n");
        } else {
            printf("● Divisible by 3    : No\n");
        }

        // Separately 5 dwara divisible kina
        if (num % 5 == 0) {
            printf("● Divisible by 5    : Yes\n");
        } else {
            printf("● Divisible by 5    : No\n");
        }

        printf("● Multiple of 3 & 5 : No\n");
    }

    return 0;
}
