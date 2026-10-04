/*
13.The Countdown: Write a program using a while loop that takes a starting
 number from the user, counts down to 1, and prints "Blastoff!" at the end.
*/

#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    for(n;n>=1;n--)
    {
        printf("%d \n",n);
    }
    printf("Blastoff!");
    
    return 0;
}
