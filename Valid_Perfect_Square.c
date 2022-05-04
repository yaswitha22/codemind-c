#include<stdio.h>
int main()
{
    int t,i,c=0,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            if(n==(i*i))
            {
                printf("True
");
                c++;
                break;
            }
        }
        if(c==0)
        {
            printf("False
");
        }
        c=0;
    }
}