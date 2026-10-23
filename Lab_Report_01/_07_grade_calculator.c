#include <stdio.h>
void fun(int mark){
    if(mark > 100 || mark<0)
        printf("Invalid Mark\n");
    else if(mark>= 80)
        printf("Grade = A");
   else if(mark >= 70)
        printf("Grade = B");
    else if(mark >= 60)
        printf("Grade = C");
    else if(mark >= 40)
        printf("Grade = D");
    else
        printf("Grade = F");
    
}
int main(){

    int mark1,mark2,mark3,mark4,mark5;
   printf("\nEnter 1st student mark = ");
   scanf("%d",&mark1);
   fun(mark1);
   printf("\nEnter 2nd student mark = ");
   scanf("%d",&mark2);
   fun(mark2);
   printf("\nEnter 3rd student mark = ");
   scanf("%d",&mark3);
   fun(mark3);
   printf("\nEnter 4th student mark = ");
   scanf("%d",&mark4);
   fun(mark4);
   printf("\nEnter 5th student mark = ");
   scanf("%d",&mark5);
   fun(mark5);
    return 0;
}
