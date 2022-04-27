#include<stdio.h>
int main()
{
    int n,i,c1=0,c2=0,c3=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            if(i==3)
            {
                printf("Pling");
                c1++;
            }
            else if(i==5)
            {
                printf("Plang");
                c2++;
            }
            else if(i==7)
            {
                printf("Plong");
                c3++;
            }
        }
    }
    if(c1==0&&c2==0&&c3==0)
    {
        printf("%d",n);
    }
}