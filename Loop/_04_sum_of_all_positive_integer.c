/*
Write a C program that prompts the user to input a series of integers until the user stops entering 
0 using a while loop and for loop. Calculate and print the sum of all the positive integers entered. 
*/

#include <stdio.h>
int main()
{
   int n, sum = 0;
   scanf("%d", &n);

   while ( n != 0 ) {
        if(n > 0) {
          sum = sum + n;
                  }
        scanf("%d", &n);
   }
    printf("%d",sum);
    return 0;
}
