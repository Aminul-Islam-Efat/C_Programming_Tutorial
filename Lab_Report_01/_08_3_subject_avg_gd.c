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

   int i,a,b,c,mark ;
   for(i = 1; i<=10;i++){
    printf("\nEnter roll %d. 3 subjects mark = ",i);
    scanf("%d %d %d",&a,&b,&c);
    mark = (a+b+c)/3;
    fun(mark);
   }
    return 0;
}
