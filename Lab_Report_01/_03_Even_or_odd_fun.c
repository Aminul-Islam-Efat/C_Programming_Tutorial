#include <stdio.h>
void fun(int n){
    if ( n%2 == 0)
        printf("Even");
    else
        printf("odd");
}
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);

    fun(n);
    return 0; 
}
