#include <stdio.h>

int main() {
    float unit, bill = 0;

    printf("Enter total electricity units consumed: ");
    scanf("%f", &unit);

    if (unit <= 100) {
        
        bill = unit * 5;
    } else if (unit <= 200) {
       
        bill = (100 * 5) + ((unit - 100) * 8);
    } else {
        
        bill = (100 * 5) + (100 * 8) + ((unit - 200) * 10);
    }

    printf("\nTotal Electricity Bill = %.2f Tk\n", bill);

    return 0;
}
