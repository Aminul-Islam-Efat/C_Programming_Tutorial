/*Electricity bill calculator*/

#include <stdio.h>

int main(){
    int unit;
    printf("Enter the unit = ");
    scanf("%d",&unit);
    if(unit <= 100){
        printf("Amount of moeny = %d",unit*5);
    }else if(unit < 200){
        printf("Amount of money = %d",8*unit);
    }else{
        printf("Amount of money %d",10*unit);
    }
    return 0;

}
