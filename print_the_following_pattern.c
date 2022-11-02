#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=(64+n);i>64;i--)
    {
        for(j=1;j<=(i-64);j++)
        {
            printf("%c ",(char)(i));
        }
        printf("
");
    }
}