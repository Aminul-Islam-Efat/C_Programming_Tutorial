#include <stdio.h>
int main()
{
    float principal,rate,time,si;
    printf("Enter total amount of money : ");
    scanf("%f",&principal);

    printf("Enter interest rate : ");
    scanf("%f",&rate);

    printf("Enter time : ");
    scanf("%f",&time);

    si = (principal*time*rate);
    printf("Total interest = %f",si);

    return 0; 
}
