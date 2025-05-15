#include<stdio.h>
int main(){
    double a,b,c,perimeter,area;
    scanf("%lf %lf %lf",&a,&b,&c);
    if((a+b)>c && (b+c)>a && (a+c)>b){
        perimeter=a+b+c;
        printf("Perimetro = %.1lf\n",perimeter);
    }
    else{
        area=((a+b)/2)*c;
        printf("Area = %.1lf\n",area);
    }
return 0;
}
