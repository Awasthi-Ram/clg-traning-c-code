#include<stdio.h>
int main()
{

   
 int a = 20;
    int c ;

   c = a++;
   a= ++a;
   c=a;
   
   printf("Line 6 - Value of c is %d\n", c );
   printf("VALUE OF A IS ===  %d\n", a );
	
   c = --a; 
   printf("Line 7 - Value of c is %d\n", c );
   printf("VALUE OF A IS ===  %d\n", a );
   
   
    return 0;
}