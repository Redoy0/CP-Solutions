#include<stdio.h>
int main(){

    double r,tax,amount;
    scanf("%lf",&amount);
    if( amount>=0.00 && amount<=2000.00){
        printf("Isento\n");
    }
    else if(amount>2000)
        {
            r=amount-2000;

        if(r<=1000){
            tax=(r*0.08);
        }else{
            r=amount - 3000;
            if(r<=1500)
            {
                tax=(1000*0.08) + (r*0.18);
            }
            else
            {
                r=amount-4500;
                tax=(1000*0.08) + (1500*0.18) + (r*0.28);
            }
        }

       printf("R$ %.2f\n", tax);
    }

return 0;
}

