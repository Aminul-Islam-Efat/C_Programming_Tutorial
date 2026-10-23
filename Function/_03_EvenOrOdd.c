//Write a function that returns 1 if a number is even, otherwise 0.
#include <stdio.h>
int EvenOrOdd(int n){
    if(n%2==0)
        return 1;
    else
        return 0;
}

int main() {
    int n;
    printf("Enter a number = ");
    scanf("%d",&n);
    printf("%d = %d",n,EvenOrOdd(n));
    return 0;
}
