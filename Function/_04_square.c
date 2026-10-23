//Write a function that returns the square of a number.
#include <stdio.h>
int sq(int a){
    return a*a;
}
int main() {
    int n, square;
    printf("Enter a number = ");
    scanf("%d",&n);
    square = sq(n);
    printf("Square of %d = %d",n,square);
    return 0;
}
