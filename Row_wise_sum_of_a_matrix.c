#include<stdio.h>
int main()
{
    int n,m,a[100][100],i,j,sum=0;
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
             sum+=a[i][j];
         }
         printf("%d ",sum);
         sum=0;
     }
}