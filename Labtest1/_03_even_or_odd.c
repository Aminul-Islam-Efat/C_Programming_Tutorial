#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    if (N % 2 == 0) {
        if (N % 4 == 0) 
        {
            printf("Even and divisible by 4\n");
        } else
        
        {
            printf("Even and not divisible by 4\n");
        }
    }
    else 
    {
        if (N % 3 == 0)
        {
            printf("Odd and divisible by 3\n");
        } 
        else
        {
            printf("Odd and not divisible by 3\n");
        }
    }

    return 0;
}
