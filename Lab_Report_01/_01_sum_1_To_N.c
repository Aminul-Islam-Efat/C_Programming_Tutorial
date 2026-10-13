/*1. Write a C program using a for loop to calculate and display the 
sum of all natural numbers from 1 to N, where N is entered by the user. 
*/
#include <stdio.h>
int main(){
    int n, i, sum = 0;
    printf("Enter N = ");
    scanf("%d",&n);

    for(i= 1; i<=n;i++){
        sum = sum +i;  
    }
    printf("Sum of all natural number form 1 to N = %d",sum);
    return 0;
}
