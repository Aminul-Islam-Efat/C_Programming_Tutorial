/*
  7. Write a C program to find and print the first 10 Fibonacci numbers using a while loop. 
*/


#include <stdio.h>
int main()
{
   int n,i = 0, first = 0, second = 1,third;

   scanf("%d", &n);
   while(i<=n) {
    printf("%d",first);
    third = first+second;
    first = second;
    second = third;
    i++;
   }
    return 0;
}
