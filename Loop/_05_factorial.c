/*
Write a C program that prompts the user to enter a positive integer. 
It then calculates and prints the factorial of that number using a while loop and for loop.
*/
#include <stdio.h>
int main()
{
   int n,i = 1,fac =1;

   scanf("%d", &n);
   while(i<=n) {
   fac = fac*i;
    i++;
   }
   printf("%d",fac);
    return 0;
}
