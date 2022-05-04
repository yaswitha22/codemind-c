#include<stdio.h>
int main()
{
    char str[100];
    int v=0,c=0,d=0,ws=0,i,sp=0;
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        {
            v++;
        }
       else if(str[i]==32)
        {
            ws++;
        }
        else if(str[i]>='0'&&str[i]<='9')
        {
            d++;
        }
       else  if(str[i]!='a'&&str[i]!='e'&&str[i]!='i'&&str[i]!='o'&&str[i]!='u'&&str[i]!='A'&&str[i]!='E'&&str[i]!='I'&&str[i]!='O'&&str[i]!='U')
        {
            c++;
        }
        else
        {
            sp++;
        }
    }
    printf("Vowels: %d
",v);
    printf("Consonants: %d
",c);
    printf("Digits: %d
",d);
    printf("White spaces: %d
",ws);
}