#include <stdio.h>

int main() {
    int N, original, reversed = 0, remainder;
    scanf("%d", &N);

    original = N;

    while (N > 0) {
        remainder = N % 10;
        reversed = reversed * 10 + remainder;
        N /= 10;
    }

    if (original == reversed) {
        printf("Palindrome\n");
    } else {
        printf("Not Palindrome\n");
    }

    return 0;
}
