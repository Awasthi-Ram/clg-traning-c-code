#include<stdio.h>
int main(int argc ,char *argv[])
{
    int i;
    printf("\n total no. of cmd arg %d \n",argc);
    scanf("%d",argc);
    for(i =0 ; i<argc; i++)
    printf("\n argv[%d] =%s",i,argv[i]);
}