#include <stdio.h>
int fibo(int n){
    if(n == 1)
        return 1;
    if(n==0)
        return 0;
    return fibo(n-1)+fibo(n-2);
        
}
int main(){
    int n;
    printf("Enate N :");
    scanf("%d",&n);
    printf("%dth fibbonacci = %d",n,fibo(n));
    return 0;
}
