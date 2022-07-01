#include<stdio.h>
int main()
{
    int n,arr[100],i,m,c=0,k=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        if(arr[i]==m)
        {
            c+=1;
            k=i;
            break;
        }
    }
    if(c==1)
    {
        printf("%d",k);
    }
    else
    {
        printf("-1");
    }
}