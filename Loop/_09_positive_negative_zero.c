#include <stdio.h>
int main()
{
   int n;
   scanf("%d", &n);

   if(n>0) 
   {
        printf("%d number is positve\n",n);
   } 
   else if (n<0)
   {
        printf("%d number is negative\n",n);
   }
   else
   {
        printf("%d number is zero\n");
   }

    return 0;
}
