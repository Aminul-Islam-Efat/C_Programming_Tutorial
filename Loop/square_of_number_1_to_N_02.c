/*
2. Print the Squares of Numbers from 1 to N
Input: 3
Output:
1 4 9

*/

#include <stdio.h>
int main()
{
    int n,i=1;
    scanf("%d",&n);
    while(i<=n){
        printf("%d ",i*i);
        i++;
    }

}
