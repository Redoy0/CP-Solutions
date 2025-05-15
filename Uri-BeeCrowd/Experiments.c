#include<stdio.h>
int main ()
{
    int n,i,a,total,sumc=0,sumr=0,sums=0;
    char ch;
    scanf("%d",&n);
    for(i=1;i<=n;++i)
    {
        scanf("%d %c",&a,&ch);
        if(ch=='C'){
            sumc+=a;
        }
        if(ch=='R'){
            sumr+=a;
        }
        if(ch=='S'){
            sums+=a;
        }

    }
    printf("Total: %d cobaias\n",(sumc+sumr+sums));
    printf("Total de coelhos: %d\n",sumc);
    printf("Total de ratos: %d\n",sumr);
    printf("Total de sapos: %d\n",sums);
    printf("Percentual de coelhos: %.2f %%\n",(float)(sumc*100)/(float)(sumc+sumr+sums));
    printf("Percentual de ratos: %.2f %%\n",(float)(sumr*100)/(float)(sumc+sumr+sums));
    printf("Percentual de sapos: %.2f %%\n",(float)(sums*100)/(float)(sumc+sumr+sums));



return 0;
}
