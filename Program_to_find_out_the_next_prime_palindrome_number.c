#include<stdio.h>
int ispal(int n)
{
    int temp=0,d,rev=0;
    temp=n;
    while(n)
    {
        d=n%10;
        rev=rev*10+d;
        n=n/10;
    }
    if(temp==rev)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isprime(int n)
{
    int c=0,i;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n,np=0;
    scanf("%d",&n);
    for(np=n+1;;np++)
    {
        if(ispal(np)&&isprime(np))
        {
            break;
        }
    }
    printf("%d",np);
}