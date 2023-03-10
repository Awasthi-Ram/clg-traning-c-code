#include<stdio.h>
int main(void)
{
    int array[5]={4,2,3,87,453},i,j,k,min=0;
    int array_2 [2]={4,8};
    for(i=0;i<5;i++)
    {
    for(j=0;j<4;j++)
    {
        if(array[j]>=array[j+1])
        {
            k=array[j+1];
            array[j+1]=array[j];
            array[j]=k;
        }
    }
    }
    for(i=0;i<5;i++)
    printf("%d\n",array[i]);
}