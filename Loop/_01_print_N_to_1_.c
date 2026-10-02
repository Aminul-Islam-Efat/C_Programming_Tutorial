/*Write a C program that prompts the user to enter a positive integer N and prints all numbers from N down to 1 using a while loop.*/


#include <stdio.h>
int main()
{
    int n,i=0;
    scanf("%d",&n);
    while(n>=1){
        printf("%d\n",n);
        n--;
    }
  return 0;
}
