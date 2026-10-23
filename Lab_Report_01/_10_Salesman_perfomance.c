#include <stdio.h>
void fun(int amount){
    if(amount >= 25000)
        printf("High Performer\n");
    else if(25000 > amount && amount > 10000)
        printf("Average Performer\n");
    else 
        printf("Low Performer\n");
}
int main(){
    int sales_amount, total=0;
    int low = 0, avg=0, high=0;
    int max = 0, j,posi ;
    for(int i =1;i<=12;i++)
    {
        printf("Enter number %d salesman  seals ammount = ",i);
        scanf("%d",&sales_amount);
        total = total+sales_amount;
        fun(sales_amount);
        for( j=1;j<=12;j++){
            if(sales_amount>max){
            max = sales_amount;
            posi =i;
         }
    }
    if(sales_amount >= 25000)
       high++;
    else if(25000 > sales_amount && sales_amount > 10000)
        avg++;
    else 
        low++;
    }
    printf("Total amount of sales = %d\n\n",total);
    printf("High perfomence total member = %d\n\n",high);
    printf("Avg perfomence total member = %d\n\n",avg);
    printf("Low perfomence total member = %d\n\n",low);
    printf("Number %d sealsman high performeing sealsperson",posi);
}
