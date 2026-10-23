//Write a function that takes two integers and returns their sum.


#include <stdio.h>
int sum(int a,int b){
    return a+b;
}

int main() {
    int a,b,add;
    printf("Enter 2 number = ");
    scanf("%d %d",&a,&b);
    add = sum(a,b);
    printf("Sum = %d",add);
    return 0;
}
