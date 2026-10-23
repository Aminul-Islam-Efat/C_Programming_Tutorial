//Write a function to calculate the cube of a number.

#include <stdio.h>
int qb(int a){
    return a*a*a;
}
int main() {
    int n, cube;
    printf("Enter a number = ");
    scanf("%d",&n);
    cube = qb(n);
    printf("cube of %d = %d",n,cube);
    return 0;
}
