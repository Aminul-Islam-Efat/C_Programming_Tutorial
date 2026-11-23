/*
3 3
1 0 1
Row 1: 1
1 0 0
Row 2: 2
1 1 1
Row 3: 0
Total Booked: 6
Maximum Booked Row: 3
*/



#include <stdio.h>

int main() {
    int N, M;
   
    scanf("%d %d", &N, &M);

    int seat;
    int total_booked = 0;   
    int max_booked = -1;   
    int max_row = 1;       

    for (int i = 0; i < N; i++) {
        int row_booked = 0;    
        int row_available = 0;  

        
        for (int j = 0; j < M; j++) {
            scanf("%d", &seat);

            if (seat == 1) {
                row_booked++;       
            } else if (seat == 0) {
                row_available++;    
            }
        }
        printf("Row %d: %d\n", i + 1, row_available);
        total_booked += row_booked;
        if (row_booked > max_booked) {
            max_booked = row_booked;
            max_row = i + 1;
        }
    }
    printf("Total Booked: %d\n", total_booked);
    printf("Maximum Booked Row: %d\n", max_row);

    return 0;
}
