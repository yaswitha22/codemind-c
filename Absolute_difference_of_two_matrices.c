#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,j,a[100][100],b[100][100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
        scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
        scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
        printf("%d",abs(b[i][j]-a[i][j]));
         if(j<n-1)
        {
            printf(" ");
        }
        }
        printf("
");
    }
}