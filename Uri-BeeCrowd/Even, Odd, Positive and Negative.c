#include<stdio.h>
int main(){
    int n,i,even=0,odd=0,p=0,ne=0;
    for(i=1;i<=5;i++){
        scanf("%d",&n);
        if(n%2==0){
            even++;
        }
        if(n%2!=0){
            odd++;
        }
        if(n>0){
            p++;
        }
        if(n<0){
            ne++;
        }

    }
    printf("%d valor(es) par(es)\n",even);
    printf("%d valor(es) impar(es)\n",odd);
    printf("%d valor(es) positivo(s)\n",p);
    printf("%d valor(es) negativo(s)\n",ne);
return 0;
}

