/* 
  Area of a rectangle 
  Take length and width from the user.
*/

#include <stdio.h>
int main(){
    int len, wid, area;

    printf("Enter  Length of the Rectangle : ");
    scanf("%d",&len);

    printf("Enter the  width Rectangle : ");
    scanf("%d",&wid);

     area = len * wid;

    printf("Area of the ractangle : %d ",area);
    return 0;

}
