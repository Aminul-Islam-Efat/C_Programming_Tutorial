/*Calculator */

#include <stdio.h>

int main() {
    int a,b;
    char ch;
    scanf("%d%c%d", &a, &ch, &b);
    if (ch == '+'){
        printf("%d",a+b);
    } else if (ch == '-') {
        printf("%d",a-b);
    } else if(ch == '*'){
        printf("%d",a*b);
    } else {
        printf("%.2f",(float)a/b);
    }


   return 0;
}
