/*
12. Desscending Order: Write a program using a for loop 
to print all numbers from N to 1, where N is provided by the user.
*/

#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    for(n;n>=1;n--)
    {
        printf("%d ",n);
    }
    
    return 0;
}
