#include<stdio.h>
int main()
{
    int a[100][100],i,j,r1,c1,sum=0;
    scanf("%d%d",&r1,&c1);
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            sum+=a[i][j];
        }
    }
    printf("%d",sum);
}