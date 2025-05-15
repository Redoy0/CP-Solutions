#include<stdio.h>
int main(){
int code,unit;
float price,total;
scanf("%d %d %f",&code,&unit,&price);
total=unit*price;
scanf("%d %d %f",&code,&unit,&price);
total+=unit*price;
printf("VALOR A PAGAR: R$ %.2f\n",total);
return 0;
}
