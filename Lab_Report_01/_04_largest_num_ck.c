#include <stdio.h>
void fun(int a, int b){
    if(a>b){
        printf("%d is Largest",a);
    }else if(b>a){
        printf("%d is Largest",b);
    }else
        printf("Both are Equal");
}
int main()
{
    int a,b;
    printf("Enter 1st number = ");
    scanf("%d",&a);
    printf("Enter 2nd numbe = ");
    scanf("%d",&b);
    fun(a,b);
    return 0;
}
