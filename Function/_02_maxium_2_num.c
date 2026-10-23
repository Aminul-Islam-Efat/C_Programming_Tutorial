//Create a function that returns the larger of two integers.

#include <stdio.h>
int largee(int a,int b){
    if(a>b)
        return a;
    else if(a<b)
        return b; 
}

int main() {
    int a,b,lr;
    printf("Enter 2 number = ");
    scanf("%d %d",&a,&b);
    lr = largee(a,b);
    printf("%d",lr);
    return 0;
}
