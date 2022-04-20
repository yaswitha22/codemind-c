#include<stdio.h>
int main()
{
    int n,ld=0,d;
    scanf("%d",&n);
    while(n)
    {
        d=n%10;
        if(d>ld)
        {
            ld=d;
        }
        n=n/10;
    }
    printf("%d",ld);
}