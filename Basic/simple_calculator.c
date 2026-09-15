#include <stdio.h>
int main(){
    int a,b,add,sub,mul,div;
    printf("Enter 1st number = ");
    scanf("%d",&a);

    printf("Enter 2nd number = ");
    scanf("%d",&b);

   add = a+b;
   sub = a-b;
   mul = a*b;
   div =  a/b;

   printf("Addition = %d\n",add);
   printf("subtraction = %d\n",sub);
   printf("Multiplication = %d\n",mul);
   printf("Division = %d\n",div);
    return 0;
}
