#include<stdio.h>
int main(){
char name[20];
double fixed_salary,sales_money;
scanf("%s",&name);
scanf("%lf",&fixed_salary);
scanf("%lf",&sales_money);
sales_money=sales_money*.15;
printf("TOTAL = R$ %.2lf\n",fixed_salary+sales_money);
return 0;
}
