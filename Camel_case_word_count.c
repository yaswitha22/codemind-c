#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int n,i,c=0;
    scanf("%[^
]s",str);
    for(i=1;i<strlen(str)-1;i++)
    {
        if(str[i]>64 && str[i]<91)
        {
            c++;
        }
    }
    printf("%d",c+1);
}