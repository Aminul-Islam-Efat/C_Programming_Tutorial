/*
Enter N = 5
 #  .  #  .  # 
 .  #  .  #  . 
 #  .  #  .  # 
 .  #  .  #  . 
 #  .  #  .  # 
*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter N = ");
    scanf("%d", &n);
    for(int row = 1; row<=n;row++){
        for(int clum = 1; clum<=n;clum++){
            if((row+clum)%2==0)
                printf(" # ");
            else{
                printf(" . ");
            }
        }
        printf("\n");
    }
    return 0;
}
