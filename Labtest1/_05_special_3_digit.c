#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int d1 = N / 100;        
    int d2 = (N / 10) % 10;  
    int d3 = N % 10;         
  
    if (d1 > d3 && (d1 + d3) == d2) {
        printf("Special\n");
    } else {
        printf("Not Special\n");
    }

    return 0;
}
