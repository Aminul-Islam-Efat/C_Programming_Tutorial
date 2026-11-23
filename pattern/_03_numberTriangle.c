/*
Enter N = 6
1 
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5 
1 2 3 4 5 6 
*/
#include <stdio.h>

int main() {
    int n;
    printf("Enter N = ");
    scanf("%d",&n);
    for(int row = 1;row<=n;row++){
        for(int clum = 1; clum<=row;clum++){
            printf("%d ",clum);
        }
        printf("\n");
    }
    return 0;
}
