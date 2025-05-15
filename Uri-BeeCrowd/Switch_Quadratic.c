#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,root1,root2,d,i;
    printf("Input a : ");
    scanf("%f",&a);
    printf("Input b : ");
    scanf("%f",&b);
    printf("Input c : ");
    scanf("%f",&c);

    d=(b*b)-(4*a*c);
    printf("D= %.2f\n",d);
    switch(d>0){
    case 1:
        root1=(- b + sqrt(d))/(2*a);
        root1=(- b - sqrt(d))/(2*a);
        printf("Root 1 : %.2f\n",root1);
        printf("Root 2 : %.2f\n",root2);
        break;
    case 0:
        switch(d<0){
        case 1:
            root1=root2=-b/(2*a);
            i=sqrt(-d)/(2*a);
            printf("Root 1 : %.2f + %.2f \n",root1,i);
            printf("Root 2 : %.2f - %.2f \n",root2,i);
        case 0:
            root1=root2=-b/(2*a);
            printf("Root 1 : %.2f\n",root1);
            printf("Root 2 : %.2f\n",root2);
        }
    }

return 0;
}
