#include<stdio.h>
int main()
{

   int a = 21;
   int b = 10;
   int c ;

   c = a + b;
   printf("Line 1 - Value of c is %d\n", c );
	
   c = a - b;
   printf("Line 2 - Value of c is %d\n", c );
	
   c = a * b;
   printf("Line 3 - Value of c is %d\n", c );
	
   c = a / b;
   printf("Line 4 - Value of c is %d\n", c );
	
   c = a % b;
   printf("Line 5 - Value of c is %d\n", c );
	
   c = a++; 
   printf("Line 6 - Value of c is %d\n", c );
	
   c = a--; 
   printf("Line 7 - Value of c is %d\n", c );
    // char str[] = "Hello World";
  // printf("%s\n", str);
    //int a = 67;
//printf("%o\n", a);
    //float f =12.67;
    //printf("%e\n", f);
   // printf("%f\n",a);
    //printf("AB\fbq\bqw\ber\b\bsft\ber");
    return 0;
}