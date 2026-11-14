#include <stdio.h>
int power(int n,int p){
        if(p == 0)
            return 1;
        if(p == 1)
            return n;
    return n * power(n,p-1);
}
int main(){
    int n,p;
    printf("Enter N : ");
    scanf("%d",&n);
    printf("Enter power : ");
    scanf("%d",&p);
    printf("%d to the power %d = %d",n,p,power(n,p));
    return 0;
}
