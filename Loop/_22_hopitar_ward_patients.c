#include <stdio.h>
int main() {
    int ward,pn,temp,fever=0,feverd =0;
    printf("Enter ward number = ");
    scanf("%d",&ward);
    for(int i= 1;i<=ward;i++){
        int feverc =0;
        printf("Enter number %d ward total patients number = ",i);
        scanf("%d",&pn);
            for(int j =1;j<=pn;j++){
                 printf("Enter number %d wards  number %d patient temp ",i,j);
                scanf("%d",&temp);
                if(temp>38){
                    fever++;
                    feverc++;  
                }
            }
         if(feverc>5)
            feverd++;
    }
    printf("Total  fever patients = %d \n",fever);
    printf("Number of wards has 5 more fever patients = %d",feverd);
    return 0;
}
