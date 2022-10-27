#include<stdio.h>
int main()
{
    int n,arr[100],i,c=0,temp=0,k=0,d;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {
        k=0;
        temp=arr[i];
        while(temp!=0)
        {
             d=temp%10;
            k++;
            temp/=10;
        }
        if(k%2==0)
        c++;
    }
    printf("%d",c);
}