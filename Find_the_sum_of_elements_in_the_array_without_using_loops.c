#include<stdio.h>
int main()
{
    int n,sum;
    int arr[100],i;
    scanf("%d",&n);
    if(n>=1&&n<=30)
    {
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    printf("%d",sum);
    }
    else
    {
        printf("Enter a Valid Number");
    }
}