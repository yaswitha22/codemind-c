#include<stdio.h>
#include<math.h>
int main()
{
    int n,arr[100],i,es=0,os=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        es+=arr[i];
        else
        os+=arr[i];
    }
    if(abs(es-os)%4==0)
    printf("X");
    else
    printf("Y");
}