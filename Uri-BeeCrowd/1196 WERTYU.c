#include<stdio.h>
#include<string.h>
int main()
{
    char a[48]="`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
    char c;
    int i,j;

    while(scanf("%c",&c)!=EOF){
            for(i=0;i<48;i++)
           {

            if(c==a[i]){
                printf("%c",a[i-1]);
                 break;}
            else if(c==' '){
                printf(" ");
                 break;}
            else if(c=='\n'){
                printf("\n");
                 break;}
            }

    }
    return 0;

}

