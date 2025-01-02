#include<stdio.h>
#include<string.h>
int main()
{
    char s[101];
    int l;

    scanf("%s",&s);
    l=(strlen(s)+1)/2;
    printf("%c\n",s[l-1]);
}
