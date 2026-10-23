 /*
Calculate Area
Write separate functions to calculate:
Circle
Rectangle
Triangle
*/
#include <stdio.h>
float circle(float r){
    return 3.1416*r*r;
}
int rectangle(int l, int w ){
    return l*w;
}
float triangle(float b, float h){
    return 0.5*b*h;
}
int main(){
    float r;
    printf("Enter the radius of a circle = ");
    scanf("%f",&r);
    printf("Area of circle = %f\n",circle(r));

    int l,w;
    printf("Enter rectangle length = ");
    scanf("%d",&l);
    printf("Enter rectangle width = ");
    scanf("%d",&w);
    printf("Area of a rectangle = %d \n",rectangle(l,w));

    float h,b;
    printf("Enter triangle height = ");
    scanf("%f",&h);
    printf("Enter triangle base = ");
    scanf("%f",&b);
    printf("Area of a triangle = %f\n",triangle(b,h));
    return 0;
}










