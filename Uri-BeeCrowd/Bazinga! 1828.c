#include<stdio.h>
int main(){
    int s1[10],s2[10];
    int i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%s %s",s1,s2);
        if(!strcmp(s1,s2)){
            printf("Caso #%d: De novo!\n",i);
        }
        else if(!strcmp(s1,"tesoura"))
        {
            if(!strcmp(s2,"papel")||!strcmp(s2,"lagarto"))
                printf("Caso #%d: Bazinga!\n",i);
            else
            printf("Caso #%d: Raj trapaceou!\n",i);
        }
        else if(!strcmp(s1,"papel"))
        {
            if(!strcmp(s2,"pedra")||!strcmp(s2,"Spock"))
                printf("Caso #%d: Bazinga!\n",i);
            else
            printf("Caso #%d: Raj trapaceou!\n",i);
        }

        else if(!strcmp(s1,"pedra"))
        {
            if(!strcmp(s2,"lagarto")||!strcmp(s2,"tesoura"))
                printf("Caso #%d: Bazinga!\n",i);
            else
            printf("Caso #%d: Raj trapaceou!\n",i);
        }
        else if(!strcmp(s1,"lagarto"))
        {
            if(!strcmp(s2,"Spock")||!strcmp(s2,"papel"))
                printf("Caso #%d: Bazinga!\n",i);
            else
            printf("Caso #%d: Raj trapaceou!\n",i);
        }
        else if(!strcmp(s1,"Spock"))
        {
            if(!strcmp(s2,"tesoura")||!strcmp(s2,"pedra"))
                printf("Caso #%d: Bazinga!\n",i);
            else
            printf("Caso #%d: Raj trapaceou!\n",i);
        }


    }


return 0;
}
