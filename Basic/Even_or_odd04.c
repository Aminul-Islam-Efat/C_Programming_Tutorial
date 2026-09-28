
    /*
    Even or odd number test.
    */

#include <stdio.h>
int main(){

    int num;
    printf("Enter a number :");
    scanf("%d",&num);

    if(num%2 == 0){
        printf("The numberr is Even");
    }else{
        printf("The number is odd");
    }
    return 0;

}
