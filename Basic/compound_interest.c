/*Compound interest */

#include <stdio.h>
#include <stdio.h>

int main(){
    float pri, rate, time,com;
    printf("Enter total amount of money = ");
    scanf("%f",&pri);

    printf("Enter the interst rate = ");
    scanf("%f",&rate);
    
    printf("Enter total time = ");
    scanf("%f",&time);
    com = pri* (pow((1+rate/100),time));
    printf(" Total amount of Compound Interest = %f ",com);
    return 0;

}
