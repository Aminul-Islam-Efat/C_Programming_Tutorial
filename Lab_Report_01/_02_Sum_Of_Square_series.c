
#include <stdio.h>
int main(){
    int n, sum = 0,i;
    printf("Enter N = ");
    scanf("%d",&n);

    for(i = 1; i<= n;i++)
    {
        sum = sum + (i*i);
    }
    printf("Sum of the series = %d",sum);

    return 0;
}
