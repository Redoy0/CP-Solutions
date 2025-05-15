#include <stdio.h>
#include <string.h>
int main()
{
    char s[1500];
    while(1)
    {
        gets(s);
        if(s[0]=='*') break;
        else
        {
            int l,i,c=1;
            char a[2];
            l=strlen(s);
            if(s[0]>=65 && s[0]<=90)
                    a[0]=s[0]+32;
            else if(s[0]>=97 && s[0]<=122)
                a[0]=s[0]-32;
            for(i=1; i<l; i++)
            {
                if(s[i]==' ')
                {
                    if(s[i+1]==s[0] || s[i+1]==a[0])
                        continue;
                    else{
                        c=0;
                        break;
                    }
                }
            }
            if(c==1) printf("Y\n");
            else printf("N\n");
        }
    }
    return 0;
}
