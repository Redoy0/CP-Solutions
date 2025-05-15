#include<stdio.h>
#include<math.h>
int main(){
    float a1,a2;
    double a3,a4;
    scanf("%f %f",&a1,&a2);
    scanf("%lf %lf",&a3,&a4);
    printf("A = %f, B = %f\n",a1,a2);
    printf("C = %lf, D = %lf\n",a3,a4);
    printf("A = %.1f, B = %.1f\n",a1,a2);
    printf("C = %.1lf, D = %.1lf\n",a3,a4);
    printf("A = %.2f, B = %.2f\n",a1,a2);
    printf("C = %.2lf, D = %.2lf\n",a3,a4);
    printf("A = %.3f, B = %.3f\n",a1,a2);
    printf("C = %.3lf, D = %.3lf\n",a3,a4);
    printf("A = %.3E, B = %.3E\n",a1,a2);
    printf("C = %.3E, D = %.3E\n",a3,a4);
    printf("A = %.0f, B = %.0f\n",a1,a2);
    printf("C = %.0lf, D = %.0lf\n",a3,a4);

return 0;
}
