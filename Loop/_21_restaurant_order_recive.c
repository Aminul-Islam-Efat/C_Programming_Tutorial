

#include <stdio.h>

int main() {
int torder=0,order;
   for(int i = 1;i<=15;i++){
       printf("Number %d customer order  = ",i);
           while(1){
               
               scanf("%d",&order);
                              if(order == 0)break;

               torder = torder+order;
               
           }
       printf("\n");
   }
    printf(" toral itaem order = %d",torder);
    return 0;
}
