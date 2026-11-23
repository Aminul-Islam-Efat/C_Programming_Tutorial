#include <stdio.h>

int main() {
    int per;
    int total_bonus_emply = 0;
    for (int i = 1; i <= 12; i++) {
        int dept_eligble = 0;

        for (int j = 1; ; j++) {
            printf("Department %d employee %d performance (0 to stop): ", i, j);
            scanf("%d", &per);
            
            if (per == 0) {
                break; 
            }

            if (per > 90) { 
                dept_eligble++;
                total_bonus_emply++;
            }
        }

        if (dept_eligble > 10) { 
            printf("Department %d has more than 10 eligible employees\n", i);
        }
        printf("\n");
    }
    printf("Total eligible employees across all 12 departments = %d\n", total_bonus_emply);

    return 0;
}
