#include<stdio.h>
int main()
{
    int a,b,lcm=0,gcd,temp;
    scanf("%d%d",&a,&b);
    int n1=a,n2=b;
    while(b!=0)
    {
        temp=b;
        b=a%b;
        a=temp;
    }
    gcd=a;
    lcm=(n1*n2)/gcd;
    printf("%d",lcm);
}