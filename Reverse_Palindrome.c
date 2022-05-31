#include<stdio.h>
int func(int n)
{
    int d,rev=0;
    while(n)
    {
        d=n%10;
        rev=rev*10 +d;
        n=n/10;
    }
    return rev;
}
int pal(int n)
{
    int d,rev=0,temp=n;
    while(n)
    {
        d=n%10;
        rev=rev*10 +d;
        n=n/10;
    }
    if(rev==temp)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int fun(int n)
{
    int rev;
    rev=func(n);
    n=n+rev;
    if(pal(n))
    {
        printf("%d",n);
        return 0;
    }
    else
    return fun(n);
}
int main()
{
    int n;
    scanf("%d",&n);
    fun(n);
}