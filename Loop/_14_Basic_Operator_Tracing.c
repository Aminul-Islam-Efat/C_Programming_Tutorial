/*
  14. Basic Operator Tracing: Without running the code, what is the exact output?
*/
#include <stdio.h>
int main(){

int a = 5;
int b = a++;
int c = ++a;
printf("a = %d, b = %d, c = %d", a, b, c);
return 0;
}

##output:
a = 7, b = 5, c = 7

