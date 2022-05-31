#include<string.h>
#include<stdio.h>
int main()
{
    char str[100];
    int i,l;
    scanf("%[^
]s",str);
    l=strlen(str);
    for(i=l-1;i>=0;i--)
    {
        printf("%c",str[i]);
    }
}