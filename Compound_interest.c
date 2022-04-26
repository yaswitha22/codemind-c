#include<stdio.h>
#include<math.h>
int main()
{
    double p,r,t,h;
    double ci=0,k;
    scanf("%lf%lf%lf",&p,&r,&t);
    k=(1+(r/100));
    ci=p*(pow(k,t));
    printf("%.2lf",ci);
    return 0;
}