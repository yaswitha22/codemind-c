#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,len,x=0,y=0;
    scanf("%[^
]s",str);
    len=strlen(str);
    for(i=0;i<len;i++)
    {
        if(str[i]=='z')
        {
            x++;
        }
        if(str[i]=='o')
        {
            y++;
        }
    }
    if(2*x == y)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
}