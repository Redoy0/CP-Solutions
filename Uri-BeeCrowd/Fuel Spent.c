#include<stdalign.h>
int main(){
    int time,speed;
    float liters;
    scanf("%d",&time);
    scanf("%d",&speed);
    liters=(float)(time*speed)/12;
    printf("%.3f\n",liters);
return 0;
}
