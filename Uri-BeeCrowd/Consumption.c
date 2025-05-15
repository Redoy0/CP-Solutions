#include<stdio.h>
int main(){
    int X;
    float consumption,Y;
    scanf("%d",&X);
    scanf("%f",&Y);
    consumption=X/Y;
    printf("%.3f km/l\n",consumption);
return 0;
}
