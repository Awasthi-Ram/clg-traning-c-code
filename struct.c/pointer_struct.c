#include<stdio.h>
typedef struct 
{
    int a;
    float b;
}m;
void f()
{
    float q;
    scanf("%f",&q);
}
int main(void)
{
    m m1[3],*p;
    int i;
    p = &m1;
    for(int i = 0; i<3;i++)
    {
        printf("\n adress %u\n",(p + i));
        printf("enter the value for M");
        scanf("%d",&(p+i)->a);
        scanf("%f",&(p+i)->b);
    }
    for(i=0 ;i<3 ;i++)
    {
        printf("\n %d %f",(p+i)->a,(p+i)->b);
    }
}