#include<stdio.h>
int main(){
    int N,note;
    int n100,n50,n20,n10,n5,n2,n1;
    n100=n50=n20=n10=n5=n2=n1=0;
    scanf("%d",&N);
    note=N;
    if(N>=100){
        n100=N/100;
        N=N-(n100*100);
    }
    if(N>=50){
        n50=N/50;
        N=N-(n50*50);
    }
    if(N>=20){
        n20=N/20;
        N=N-(n20*20);
    }
    if(N>=10){
        n10=N/10;
        N=N-(n10*10);
    }
    if(N>=5){
        n5=N/5;
        N=N-(n5*5);
    }
    if(N>=2){
        n2=N/2;
        N=N-(n2*2);
    }
    if(N>=1){
        n1=N;
    }
    printf("%d\n",note);
    printf("%d nota(s) de R$ 100,00\n",n100);
    printf("%d nota(s) de R$ 50,00\n",n50);
    printf("%d nota(s) de R$ 20,00\n",n20);
    printf("%d nota(s) de R$ 10,00\n",n10);
    printf("%d nota(s) de R$ 5,00\n",n5);
    printf("%d nota(s) de R$ 2,00\n",n2);
    printf("%d nota(s) de R$ 1,00\n",n1);

return 0;
}
