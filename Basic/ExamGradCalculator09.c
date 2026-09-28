/*Exam grade point calculator */

#include <stdio.h>

int main(){
    int mark;
    printf("Enter your mark = ");
    scanf("%d",&mark);

    if(mark > 100 || mark < 0){
        printf("Invalid number \n");
    }else if(mark >= 80){
        printf("A+\n");
    }else if(mark >= 70){
        printf("A \n");
    }else if(mark >= 60){
        printf("A-\n");
    }else if(mark >= 50){
        printf("B\n");
    }else {
        printf("F");
    }
    return 0;

}
