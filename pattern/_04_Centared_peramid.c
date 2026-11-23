/*
Enter N = 5
    *
   ***
  *****
 *******
*********
*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter N = ");
    scanf("%d", &n);
    for (int row = 1; row <= n; row++) {
        for (int space = 1; space <= n - row; space++) {
            printf(" ");
        }
        for (int star = 1; star <= row*2-1; star++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
