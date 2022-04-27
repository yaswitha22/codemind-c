#include<stdio.h>
#include<math.h>
int main()
{
   float a,b,c;
   scanf("%f%f%f",&a,&b,&c);
    float area=0.0,s=0.0,k=0.0;
    s=(a+b+c)/2;
    k=s*(s-a)*(s-b)*(s-c);
    area=sqrt(k);
    printf("%.2f",area);
}