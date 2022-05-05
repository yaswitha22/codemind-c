#include<stdio.h>
int main()
{
    char s[100],max;
    scanf("%[^
]s",s);
    int i;
    max=s[0];
    for(i=0;s[i]!=NULL;i++)
    {
        if(max<s[i])
        {
            max=s[i];
        }
    }
    printf("%c",max);
}