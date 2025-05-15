#include<stdio.h>
int main(){
    double s,e,p,n;
    scanf("%lf",&s);
    if(s>0 && s<=400){
            e=(s*15)/100;
            n=s+e;
        printf("Novo salario: %.2lf\n",n);
        printf("Reajuste ganho: %.2lf\n",e);
        printf("Em percentual: 15 %%\n");
    }
    else if(s>=400.01 && s<=800.00){
            e=(s*12)/100;
            n=s+e;
        printf("Novo salario: %.2lf\n",n);
        printf("Reajuste ganho: %.2lf\n",e);
        printf("Em percentual: 12 %%\n");
    }
    else if(s>=800.01 && s<=1200.00){
            e=(s*10)/100;
            n=s+e;
        printf("Novo salario: %.2lf\n",n);
        printf("Reajuste ganho: %.2lf\n",e);
        printf("Em percentual: 10 %%\n");
    }
    else if(s>1200.01 && s<=2000.00){
            e=(s*7)/100;
            n=s+e;
        printf("Novo salario: %.2lf\n",n);
        printf("Reajuste ganho: %.2lf\n",e);
        printf("Em percentual: 7 %%\n");
    }
    else if(s>2000){
            e=(s*4)/100;
            n=s+e;
        printf("Novo salario: %.2lf\n",n);
        printf("Reajuste ganho: %.2lf\n",e);
        printf("Em percentual: 4 %%\n");
    }
return 0;
}
