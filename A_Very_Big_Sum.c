#include<stdio.h>
int main()
{
    int a[100],n,i;
    long long int s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        s+=a[i];
    }
    printf("%lld",s);
    return 0;
}