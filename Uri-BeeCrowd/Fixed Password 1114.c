#include<stdio.h>
int main(){
    int n,p=2002;
    while(1){
        scanf("%d",&n);
        if(n!=p){
            printf("Senha Invalida\n");
            continue;
        }
        else if(n==p){
            printf("Acesso Permitido\n");
            break;
        }
    }

return 0;
}
