#include<stdio.h>
int main()
{
    int n,sum=0,sum1=0,m,i;
    scanf("%d%d",&n,&m);
    for(i=1;i<n&&i<m;i++)
    {
        if(n%i==0)
        {
            sum+=i;
        }
        if(m%i==0)
        {
            sum1+=i;
        }
    }
   if(sum1==n&&sum==m)
   {
       printf("Amicable");
   }
   else
   {
       printf("Not Amicable");
   }
}