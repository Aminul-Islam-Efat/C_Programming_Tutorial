/*
Write a C program that calculates and prints the sum of
cubes of even numbers up to a specified limit using a while loop.
*/

#include <stdio.h>

int main() {
    int i = 2, n,qub,sum =0;
    printf("Enter limit  : ");
    scanf("%d", &n);
   

    while(i<=n) 
    {
        qub = i*i*i;
        sum = sum +qub;
        i = i+2;
    }
    printf("Sum of cubes of even numbers = %d",sum);

    return 0;
}
