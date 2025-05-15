#include<stdio.h>
int main()
{
    double a,r,v,h,d;
    while(scanf("%lf  %lf",&v,&d)!=EOF){
        r=d/2.0;
        a=3.14*(r*r);
        h=v/a;

        printf("ALTURA = %.2lf\n",h);
        printf("AREA = %.2lf\n",a);

    }

return 0;
}
