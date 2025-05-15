#include<stdio.h>
#include<string.h>
void getstr(){
    char s[100];
    gets(s);

}
int main()
{
    char ch[100];
    int i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fflush (stdin);
        getstr();
        printf("gzuz\n");

    }

   return 0;
}
