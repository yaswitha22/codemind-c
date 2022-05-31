#include<stdio.h>
int main()
{
    int n,d,r=0;
    scanf("%d%d",&n,&d);
    while(n)
    {
        d=n%10;
        n=n/10;
        r+=d*d;
        if(n==0 && r>9)
        {
            n=r;
            r=0;
        }
    }
    if(r==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}