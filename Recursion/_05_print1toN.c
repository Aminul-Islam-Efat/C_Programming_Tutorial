#include <stdio.h>

void oneton(int n){
    if(n == 0)
        return;
    oneton(n-1);
    printf("%d ", n);
}

int main(){
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    
    if(n < 1) {
        printf("Enter a number larger than 1\n");
    } else {
        printf("print 1 to %d: ", n);
        oneton(n);
        printf("\n");
    }
    
    return 0;
}
