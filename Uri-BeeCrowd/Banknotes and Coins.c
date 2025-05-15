#include<stdio.h>
int main()
{   int coins,c1,c50,c25,c10,c05,c01,cx1;
    double amount;
    int amount2;
    int n100,n50,n20,n10,n5,n2,x1;
    scanf("%lf",&amount);

    amount2=amount;
    coins=(amount-amount2)*100;

    n100=amount2/100;
    x1=amount2%100;
    n50=x1/50;
    x1=x1%50;
    n20=x1/20;
    x1=x1%20;
    n10=x1/10;
    x1=x1%10;
    n5=x1/5;
    x1=x1%5;
    n2=x1/2;
    c1=x1%2;

    c50=coins/50;
    cx1=coins%50;
    c25=cx1/25;
    cx1=cx1%25;
    c10=cx1/10;
    cx1=cx1%10;
    c05=cx1/5;
    c01=cx1%5;
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",n100);
    printf("%d nota(s) de R$ 50.00\n",n50);
    printf("%d nota(s) de R$ 20.00\n",n20);
    printf("%d nota(s) de R$ 10.00\n",n10);
    printf("%d nota(s) de R$ 5.00\n",n5);
    printf("%d nota(s) de R$ 2.00\n",n2);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n",c1);
    printf("%d moeda(s) de R$ 0.50\n",c50);
    printf("%d moeda(s) de R$ 0.25\n",c25);
    printf("%d moeda(s) de R$ 0.10\n",c10);
    printf("%d moeda(s) de R$ 0.05\n",c05);
    printf("%d moeda(s) de R$ 0.01\n",c01);

return 0;
}
