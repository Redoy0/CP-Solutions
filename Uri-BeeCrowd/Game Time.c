#include<stdio.h>
int main(){
    int a,b,time;
    scanf("%d%d",&a,&b);
    if(a>b){
        time=24+(b-a);
        printf("O JOGO DUROU %d HORA(S)\n",time);
    }
    else if(a==b){
        printf("O JOGO DUROU 24 HORA(S)\n");
    }
    else if(b>a){
        printf("O JOGO DUROU %d HORA(S)\n",(b-a));
    }
return 0;
}
