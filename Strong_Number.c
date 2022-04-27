#include<stdio.h>
int main()
{
    int n,pd=1,sum=0,i,temp=0,d;
    scanf("%d",&n);
    temp=n;
    while(n)//145
    {
        d=n%10;//4
        for(i=d;i>=1;i--)
        {
            pd*=i;//120
        }
        sum+=pd;
        pd=1;
        n=n/10;
    }
    if(temp==sum)
    {
        printf("The number %d is a strong number",temp);
    }
    else
    {
        printf("The number %d is not a strong number",temp);
    }
}