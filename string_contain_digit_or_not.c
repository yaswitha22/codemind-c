#include<stdio.h>
int main()
{
    char s[100];
    int c=0,i;
    scanf("%[^
]s",s);
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]>='0'&&s[i]<='9')
        {
            c++;
        }
    }
    if(c>0)
    {
    printf("Contains %d digit",c);
    }
    if(c==0)
    {
         printf("Doesn't contain digit");
    }
}