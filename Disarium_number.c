#include<stdio.h>
#include <math.h>
int main()
{
   int n,temp,c=0,temp1,sum=0,d;
   scanf("%d",&n);
   temp=n;
   temp1=n;
   while(n>0)
   {
       d=n%10;
       c++;
       n=n/10;
   }
   while(temp>0)
   {
       d=temp%10;
       sum=sum+pow(d,c--);
       temp=temp/10;
   }
   if(sum==temp1)
   {
       printf("True");
   }
   else
   {
       printf("False");
   }
}