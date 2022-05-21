#include<stdio.h>
int main()
{
    int a[100][100],i,j,n,m,er=0,od=0;
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
            if(i%2==0)
            {
                er+=a[i][j];
            }
            else
            {
                od+=a[i][j];
            }
        }
    }
    printf("%d %d",er,od);
}