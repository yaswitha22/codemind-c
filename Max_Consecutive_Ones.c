#include<stdio.h>
int main()
{
    int n,arr[100],i,c=0,max=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {
        if(arr[i]==1)
        c++;
        else
        {
           if(c>max)
           max=c;
           c=0;
        }
    }
    if(c>max)
    printf("%d",c);
    else
    printf("%d",max);
}