#include<stdio.h>
int main()
{
    char str[100000];
    scanf("%[^
]s",str);
    int c=0,count=0;
    for(int i=0;str[i]!=NULL;i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
        {
            c++;
        }
        else
        {
            if(c>count)
            {
                count=c;
            }
            c=0;
        }
    }
    if(c>count)
    {
        count=c;
    }
    printf("%d",count);
}