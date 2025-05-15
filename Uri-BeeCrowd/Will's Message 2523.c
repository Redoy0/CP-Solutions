#include<stdio.h>
#include<string.h>

int main()
{
    char s[26];
    int n,i,j=0,x;
    while(scanf("%s",s)!=EOF){
        fflush(stdin);
        scanf("%d",&n);
        char a[n];
        for(i=0;i<n;++i)
        {
            scanf("%d",&x);
            a[i]=s[x-1];
        }
        a[i]='\0';
        printf("%s\n",a);
    }
    return 0;

}
