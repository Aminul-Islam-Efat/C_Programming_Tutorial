 /*
    Celsius to Fahrenheit
    Convert temperature from Celsius to Fahrenheit
    */

#include <stdio.h>
int main(){
    float cel, fah;
    printf("Enter Temperature in celsius = ");
    scanf("%f",&cel);
    
    fah = (cel *1.8)+32;
    printf("Temperature in Fahrenheit = %f",fah);

    return 0;

}
