#include<stdio.h>
int main()
{
    int n,d,rev=0,i,c=0,j,k=0,temp=0;
    scanf("%d",&n);
    temp=n;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
   while(c==2&&n>0)
   {
       d=n%10;
       rev=rev*10+d;
       n=n/10;
   }
   for(j=1;j<=rev;j++)
   {
       if(rev%j==0)
       {
           k++;       }
   }
   if(k==2&&c==2)
   {
       printf("circular prime");
   }
   else if(c==2&&k>2)
   {
       printf("prime but not a circular prime");
   }
   else 
   {
       printf("not prime");
   }
}
