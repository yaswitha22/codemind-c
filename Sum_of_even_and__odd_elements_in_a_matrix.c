#include<stdio.h>
int main()
{
    int n,m,i,j,a[100][100],os=0,es=0;
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
         if (a[i][j]%2==0)
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