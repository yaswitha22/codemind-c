#include<stdio.h>
int main()
{
    int n,arr[100],i,sum=0;
    float avg=0.0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=arr[i]+sum;
        avg=(float)sum/n;
    }
    printf("%.2f",avg);
}