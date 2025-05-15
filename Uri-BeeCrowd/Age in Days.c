#include<stdio.h>
int main()
{
    int age,year,month,days,y;
    scanf("%d",&age);
    year=age/365;
    y=age%365;
    month=y/30;
    days=y%30;
    printf("%d ano(s)\n",year);
    printf("%d mes(es)\n",month);
    printf("%d dia(s)\n",days);

    return 0;
}
