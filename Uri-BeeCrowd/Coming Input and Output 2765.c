#include<stdio.h>
#include<string.h>
#include<strings.h>

int main(){
    int i;
    char s[128];
    while(gets(s)){
        for(i=0;i<strlen(s);i++){
            if(s[i]==',')
                printf("\n");
            else
                printf("%c",s[i]);
        }
        printf("\n");
    }

return 0;
}
