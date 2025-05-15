#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int t,i;
    char s[101];
    scanf("%d",&t);
    while(t--)
    {
        char a[101];
        int j=0;
        fflush(stdin);
        scanf("%s",s);

        for(i=strlen(s)-1;i>=0;i--)
        {

            if(islower(s[i]))
            {
                a[j]=s[i];
                j++;
            }
        }
        a[j]='\0';
        printf("%s\n",a);


    }




return 0;
}
