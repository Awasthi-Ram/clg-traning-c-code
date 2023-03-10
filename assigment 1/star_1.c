#include<stdio.h>
int main(void)
{
    int num,i,j,k,l;
    printf("enter any obb no.");
    scanf("%d",&num);
    j=num;
    k=0;
    l=num-2;
    for (i=0;i<num;i++)

{
    //num=num-2;
   // printf("%d",i);
    if (k==0 && j>0 )
    {
        printf("%d",i);
        printf("*");
        i=0;
        j--;
    }
    if(j==0)

    {
       k=1;
       //num=num-2;
       i+=2;
       j=2;
      // l=num-4;
       //j=num;
       //printf("h");
    }
    if(k==1 && l>0)
    {
        printf("\n*");
        l--;
        i--;
    }
     if(l==0)
    {
        //i=num-1;
        printf("\n");
        num=num-2;
        i=0;
        k=0;
        l=2;
        j=num-2;
        l=num-4;
        
    }

}


}