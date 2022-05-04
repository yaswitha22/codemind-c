#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,k=0,p=0;
    scanf("%d%d%d",&a,&b,&c);
    p=pow(a,b);
    k=p%c;
    printf("%d",k);
}