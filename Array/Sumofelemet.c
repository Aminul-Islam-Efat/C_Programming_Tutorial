#include <stdio.h>
int main(){
    int number[10],sum = 0;
    for(int i = 1;i<=10;i++){
        printf("Enter number %d = ",i);
        scanf("%d",&number[i]);
        sum = sum+number[i];
    }
    printf("Sum = %d",sum);
}
