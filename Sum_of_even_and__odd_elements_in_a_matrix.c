#include<stdio.h>
int main()
{
    int a[100][100],i,j,n,m,es=0,os=0;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a[i][j]%2==0)
            {
                es+=a[i][j];
            }
            else
            {
                os+=a[i][j];
            }
        }
    }
    printf("%d %d",es,os);
}