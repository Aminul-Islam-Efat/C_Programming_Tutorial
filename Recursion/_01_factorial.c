
#include <stdio.h>

int facto(int n){
    if(n == 1)
        return 1;
    return n*facto(n-1);
}

int main() {

    int n;
    printf("Enter N :");
    scanf("%d",&n);
    if(n<=0)
        printf("Invalid");
    else
    printf("Factorial of %d = %d",n,facto(n));
    return 0;
}
