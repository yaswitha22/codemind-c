#include<stdio.h>
#include<math.h>
int main()
{
    int n,diff=0,s1=0,s2=0,i,arr[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n/2;i++)
    {
        s1+=arr[i];
    }
    for(i=(n/2);i<n;i++)
    {
        s2+=arr[i];
    }
    printf("%d
%d",s1,s2);
}