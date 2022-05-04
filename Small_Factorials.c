#include<stdio.h>
int main()
{
    int t,i,k,pd=1,n;
    scanf("%d",&t);
    for(k=0;k<t;k++)
    {
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            pd*=i;
        }
        printf("%d
",pd);
        pd=1;
    }
}