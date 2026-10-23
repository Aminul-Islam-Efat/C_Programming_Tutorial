#include <stdio.h>
int main(){
    int n,i,fac = 1;
    printf("Enter n = ");
    scanf("%d",&n);

    for(i = 1;i<=n;i++){
        fac = fac *i;
    }

    printf("Factorial of %d = %d\n",n,fac);
    int num = fac, count = 0;

    for(int j = 1;num>0;j++){
        num = num/10;
        count++;
    }

    printf("Digit of Factoril value = %d",count);
    return 0;
}
