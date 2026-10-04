/*
15.Sum of Natural Numbers: Ask the user for a number N. 
Use a while loop to calculate the sum of all numbers from 1 to N (e.g.,
 if N=4, sum is 1+2+3+4 = 10).

*/

#include <stdio.h>
int main()
{
    int n,sum=0,i=1;
    scanf("%d",&n);

    while(n>=i)
    {
       sum = sum+i;
       i++; 
    }
    printf("sum of = %d",sum);
    return 0;
}
