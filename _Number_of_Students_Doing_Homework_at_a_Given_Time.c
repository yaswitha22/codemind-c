#include<stdio.h>
int main()
{
    int x,y,arr[100],brr[100],z,d=0;
    scanf("%d",&x);
    for(int i=0;i<x;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&y);
    for(int i=0;i<y;i++)
    {
        scanf("%d",&brr[i]);
    }
    scanf("%d",&z);
    for(int i=0;i<x;i++)
    {
        if(arr[i]<=z && z<=brr[i])
        {
            d++;
        }
    }
    printf("%d",d);
}