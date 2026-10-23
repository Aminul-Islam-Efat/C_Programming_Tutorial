 #include <stdio.h>
 void fun(int n){
    int orgi = n;
    int i,remind,revrs =0;
    for(i =1; n>0;i++){
        remind = n%10;
        revrs = revrs*10+remind;
        n = n/10;
    }
    if(orgi == revrs)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");
 }
 int main(){
    int i,n;
    for(i =1;i <=10;i++){
        printf("Enter a number : ");
        scanf("%d",&n);
        fun(n);
    }
    return 0;
 }
