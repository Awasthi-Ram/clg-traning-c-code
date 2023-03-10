#include<stdio.h>
int main (void){

    int num,i,f=1;
    int *p=&num,*q=&i,*r=&f;
    
    scanf("%d",p);
    for(*q=1;*q<=num;(*q)++)
    {
        //f*=i;
        *r=(*r)*(*q);
    }
    printf("factorial of gave no. is %d ",*r);
}