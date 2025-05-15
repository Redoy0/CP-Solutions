#include<stdio.h>
#include<string.h>
int main()
{
    char s[101];
    int i,c=0,l;
    gets(s);
    for(i=0;i<strlen(s);++i)
    {
        if(s[i]=='1') c++;

    }

    if(c%2==0)
        strcat(s,"0");
    else
        strcat(s,"1");

    printf("%s\n",s);


    return 0;

}
