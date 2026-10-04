/*
11. Leap Year Logic: Ask the user for a year. Use a single if statement
 with compound logical operators (&& and ||) to determine if it is a leap year.
 (Rule: Divisible by 4, but NOT 100, unless ALSO divisible by 400).
*/

#include <stdio.h>
int main()
{
    int year;
    scanf("%d",&year);
    if((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
    {
        printf("Leap year \n");
    }
    else 
    {
        printf("Not leap year \n");
    }
    return 0;
}
