#include<stdio.h>
int main()
{
    int n,m,i,d,rev=0,temp=0;
    scanf("%d",&n);
    scanf("%d",&m);
    for(i=n;i<=m;i++)
    {
        rev=0;
        temp=i;
        while(temp)
        {
            d=temp%10;
            rev=rev*10+d;
            temp=temp/10;
        }
        if(i==rev)
        {
            printf("%d ",rev);
        }
    }
}