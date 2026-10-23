#include <stdio.h>
void fun(int n){
    int i,flag = 1;
    for(i = 2;i<n;i++){
        if(n%i==0)
            flag = 0;
    }
    if(flag == 1)
         printf("%d is a prime number",n);
    else
        printf("%d is not a prime number",n);
}
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    fun(n);
    return 0;
}
