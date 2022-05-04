#include<stdio.h>
int main()
{
    int t,a,b,c=0,d,i;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&a,&b);
        for(i=a;i<=b;i++)
        {
            while(i)
            {
                d=i%10;
                break;
            }
            if(d==3||d==9||d==2)
            {
                c++;
            }
        }
        printf("%d
",c);
        c=0;
    }
}