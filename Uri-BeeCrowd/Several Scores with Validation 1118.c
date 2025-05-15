#include<stdio.h>
int main(){
    int x,i=0;
    double a[3],n,avg;
    while(1){
        while(1)
        {
            scanf("%lf",&n);
            if(n>=0&& n<=10){
                a[i]=n;
                i++;
            }
            else{
                printf("nota invalida\n");
            }
            if(i>1) break;
        }
        i=0;
            avg=(a[0]+a[1])/2.00;
            printf("media = %.2lf\n",avg);
            while(1){
                scanf("%d",&x);
                printf("novo calculo (1-sim 2-nao)\n");
                if(x==1 || x==2) break;
            }
            if(x==1) continue;
            else break;
    }
return  0;
}
