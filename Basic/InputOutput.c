/**
 * C programming basic input/output
 */
 #include <stdio.h>
 int main(){
     /**
      * All primitive and derived types
      */
      char charvalue;  // important
      unsigned char uchar;
      short shortvalue;
      unsigned short ushort;
      int intvalue;  //important
      unsigned uint;
      long longvalue;
      unsigned long ulong;
      long long longlongvalue;  //important
      unsigned long long ulonglong;
      float floatvalue;      //important
      double doublevalue;  //important
      long double longdouble;
      /**
       *Input secstion
       */
       printf("Enter a character ="); //important
       charvalue = getchar();    // getchar() function to input a character
       
       printf("Enter one another character = ");
       uchar = getchar();
       
       printf("Enter a signed shortvalue = ");
       scanf("%hi", &shortvalue);
       
       printf("Enter an unsigned shortvalue = ");
       scanf("%hu", &ushort);
       
       printf("Enter a signed integer = ");//important
       scanf("%d", &intvalue);
       
       printf("Enter a unsigned integer value = ");
       scanf("%lu", &uint);
       
       printf("Enter a signed long value = ");
       scanf("%ld", &longvalue);
       
       printf("Enter a unsigned long value = ");
       scanf("%lu", &ulong);
       
       printf("Enter a long long signed value =  ");//important
       scanf("%lld", &longlongvalue);
       
       printf("Enter an unsigned long long value = ");
       scanf("%llu", &ulonglong);
       
       printf("Enter a float value = ");//important
       scanf("%f", &floatvalue);
       
       printf("Enter a double value = ");//important
       scanf("%lf", &doublevalue);
       
       printf("Enter a long doublevalue = ");
       scanf("%Lf", &longdouble);
       
       
       /*
       Print the value of all variable
       */
       
       
        
       
      
 }
