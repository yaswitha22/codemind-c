#include<stdio.h>
int main()
{
    char str[100],c=0,i;
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]==32)
        {
            c++;
        }
    }
    printf("%d",c+1);
}