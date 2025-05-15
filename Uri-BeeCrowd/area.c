#include<stdio.h>
int main(){
    double pi=3.14159;
    double A,B,C,triangle,circle,trapezium,square,rectangle;
    scanf("%lf %lf %lf",&A,&B,&C);
    triangle=0.5*(A*C);
    circle=pi*(C*C);
    trapezium=((A+B)/2)*C;
    square=B*B;
    rectangle=A*B;

    printf("TRIANGULO: %.3lf\n",triangle);
    printf("CIRCULO: %.3lf\n",circle);
    printf("TRAPEZIO: %.3lf\n",trapezium);
    printf("QUADRADO: %.3lf\n",square);
    printf("RETANGULO: %.3lf\n",rectangle);

return 0;
}

