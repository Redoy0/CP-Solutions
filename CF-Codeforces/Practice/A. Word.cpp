#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    scanf("%s",s);
    int len=strlen(s);
    int up=0;

    for(int i=0; i<len; i++)
    {
        if(s[i]>=65 && s[i]<=90)
        {
            up++;
        }

    }

    if(up>(len-up)){
        for(int i=0;i<len;i++){
            if(s[i]>=97 && s[i]<=122){
                s[i]-=32;
            }
        }

    }
    else{
        for(int i=0;i<len;i++){
            if(s[i]>=65 && s[i]<=90){
                s[i]+=32;
            }
        }
    }
    printf("%s\n",s);

    return 0;
}
