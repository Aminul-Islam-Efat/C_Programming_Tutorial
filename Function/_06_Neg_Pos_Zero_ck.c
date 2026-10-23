//Write a function that determines whether a number is positive, negative, or zero.

#include <stdio.h>
void fun(int n){
    if(n>0)
        printf("%d is positive.\n",n);
    else if(n<0)
        printf("%d is negative.\n",n);
    else
        printf("%d is Zero.\n",n);
}

int main() {
    int n;
    printf("Enter a number = ");
    scanf("%d",&n);
    fun(n);
    return 0;
}
