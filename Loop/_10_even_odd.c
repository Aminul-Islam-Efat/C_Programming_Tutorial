/*
10. The Even/Odd Gatekeeper: Take an integer input. Use the modulo operator (%) and 
an if-else statement to determine if it is even or odd.
*/

#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    if(n % 2 == 0)
    {
        printf("%d is a even number.\n",n);
    }
    else 
    {
        printf("%d is a odd number.\n",n);
    }
        return 0;
}
