#include<stdio.h>
int main()
{
    signed int n;
    int rev=0,i,r=0;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    printf("%d",(int)rev);
}