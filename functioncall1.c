#include<stdio.h>
void pass (int a)
{
    a = a +10;
    printf("%d\n",a);
    
}
int main(void)
{
    int num = 10;
    pass(num);
    printf("%d\n",pass(num));
}