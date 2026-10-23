#include <stdio.h>
void fun(int n){
    int count=0;
    while(n>0){
       n = n/10;
        count++;
}
    printf("digit = %d",count);
}

int main() {

   int n ;
    printf("Enter a  number = ");
    scanf("%d",&n);
    fun(n);
    return 0;
}
