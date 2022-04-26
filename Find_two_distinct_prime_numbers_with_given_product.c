#include<stdio.h>
int main()
{
    int n,a=1,b=1,i,c=0,ct=0,p=1,temp=0;
    scanf("%d",&n);
    temp=n;
    for(i=1;i<n;i++)
    {
        if(n%i==0&&n>2)
        {
            c=i;
            a=b;
            b=c;
        }
        p=a*b;
        if(p==temp)
        {
            ct++;
            printf("%d %d ",a,b);
            break;
        }
    }
    if(ct==0)
    {
        printf("-1");
    }
}