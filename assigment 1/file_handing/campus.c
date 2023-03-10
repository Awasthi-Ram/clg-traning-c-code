#include<stdio.h>
#include <string.h>
#include<conio.h>
typedef struct student
{
    char name[10];
    int marks;
    long roll_no;

}s;

int main(void)
{
    s s1[5],s2[5];
    FILE *p;
    p = fopen("C:\\Users\\UMENDRA\\Desktop\\file handeing\\ram.txt","wb");
    if (p =NULL)
    {
        printf("can not open file\n");
        exit(0);
    }
    printf("enter data for students name,marks,roll no.");
    for(int i =0 ; i<5;i++)
    {
        printf("\n enter data now");
        scanf("%s%d%ld",&s1[i].name,&s1[i].marks,&s1[i].roll_no);
        fwrite (&s1[i],sizeof(s),1,p);

    }
    fclose(p);

    p = fopen("C:\\Users\\UMENDRA\\Desktop\\file handeing\\ram.txt","rb");
    printf("\n file contain following recodes|n");

    for( int i =0 ;i<5;i++)
    {
        fread(&s2[i],sizeof(s),1,p);
        printf("%s\t%d\t%ld\n",s2[i].name,s2[i].marks,s2[i].roll_no);
    }
    fclose(p);
}