#include<stdio.h>
#include<math.h>
int main()
{
    int n,d,sq=0,rev=0,temp=0,temp1=0,c=0,d1,k=0,p;
    scanf("%d",&n);
    temp=n;
    sq=n*n;
    temp1=0;
    while(n)
    {
        d=n%10;
        c++;
        n=n/10;
    }
    while(sq)
    {
        p=pow(10,c);
        d1=sq%p;
        if(d1==temp)
        {
            printf("Automorphic Number");
            k++;
            break;
        }
        sq=sq/10;
    }
    if(k==0)
    {
        printf("Not an Automorphic Number");
    }
}