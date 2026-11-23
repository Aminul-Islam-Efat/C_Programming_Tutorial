/*
Enter N = 5
 1  2  3  4  5 
 2  4  6  8  10 
 3  6  9  12  15 
 4  8  12  16  20 
 5  10  15  20  25 
*/
#include <stdio.h>

int main() {

   int n;
    printf("Enter N = ");
    scanf("%d",&n);
    for(int row = 1;row<=n;row++){
        for(int clum = 1; clum<=n;clum++){
            printf(" %d ",row*clum);
        }
        printf("\n");
    }
    return 0;
}
