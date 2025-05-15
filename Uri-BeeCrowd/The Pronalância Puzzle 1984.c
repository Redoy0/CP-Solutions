#include<stdio.h>
#include<string.h>
int main(){
    char s[25],temp;
    int i,j,l;
    scanf("%s",s);
    l=strlen(s);
    for(i=0,j=l-1;i<l/2;i++,j--)
    {
        temp=s[i];
        s[i]=s[j];
        s[j]=temp;
    }
    printf("%s\n",s);



return 0;
}
