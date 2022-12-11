#include <limits.h>
#include <stdio.h>
void thirdLargest(int arr[], int arr_size)
{
    if(arr_size==1)
    {
        printf("%d",arr[0]);
        return;
    }
    else if(arr_size==2)
    {
        if(arr[0]>arr[1])
        {
            printf("%d",arr[0]);
            return ;
        }
        else
        {
          printf("%d",arr[1]);
          return ;
        }
    }
    else{
    int first = arr[0];
    for (int i = 1; i < arr_size; i++)
        if (arr[i] > first)
            first = arr[i];
    int second = INT_MIN;
    for (int i = 0; i < arr_size; i++)
        if (arr[i] > second && arr[i] < first)
            second = arr[i];
    int third = INT_MIN;
    for (int i = 0; i < arr_size; i++)
        if (arr[i] > third && arr[i] < second)
            third = arr[i];
    printf("%d", third);
    }
}
int main()
{
    int arr[100],n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    thirdLargest(arr, n);
    return 0;
}