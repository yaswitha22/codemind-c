#include<stdio.h>
int main()
{
    int c=0,val=0,max=0;
    int n,a[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        c=0;
        for(int j=0;j<n;j++)
        {
            if(a[i]==a[j]&&i!=j)
            {
                c++;
            }
        }
        if((c+1)>max)
        {
            max=c+1;
            val=a[i];
        }
        else if((c+1)==max)
        {
            if(a[i]<val)
            {
                val=a[i];
            }
        }
    }
    printf("%d",val);
}