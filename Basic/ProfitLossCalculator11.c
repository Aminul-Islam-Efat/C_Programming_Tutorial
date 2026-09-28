/*Profit or loss  */

#include <stdio.h>

int main(){
    float cost, sell;
    printf("Enter total cost = ");
    scanf("%f",&cost);

    printf("Enter total sell = ");
    scanf("%f",&sell);

    if (cost == sell){
        printf("No profit No loss\n");
    }else if(cost > sell){
        printf("loss\n");
    }else{
        printf("profit \n");
    }
    return 0;

}
