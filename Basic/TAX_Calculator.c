/*Income TAX calculator */

#include <stdio.h>

int main() {
   float income;
   printf(" Enter your income = ");
    scanf("%f",&income);

    if (income <= 250000) {
        printf("No TAX\n");
    } else if (income <= 500000) {
        printf("TAX = %f\n",income*(5.0/100));
    } else if ( income <= 1000000) {
        printf("TAX = %f",income*(20.0/100));
    } else {
        printf("TAX = %f",income*(30.0/100));
    }
   return 0;
}
