/*Ttiangle cheacker   */

#include <stdio.h>

int main(){
   int a,b,c;
   printf("Enter the length of A : ");
   scanf("%d",&a);

   printf("Enter the length of B : ");
   scanf("%d",&b);

   printf("Enter the length of C : ");
   scanf("%d",&c);

   if(a+b>c && b+c>a && a+c>b){
     
      if(a == b &&b == c ){
          printf("Equilateral\n");
      }
      else if(a == b || b==c || a ==c){
        printf("Isosceles\n");
      }
      else{
          printf("Scalene\n");
      }
     }
   else {
    printf("Invalild tringle \n");
   }
    return 0;

}
