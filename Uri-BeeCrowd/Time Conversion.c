#include<stdio.h>
int main(){
    int time,min,hours,second,h;
    scanf("%d",&time);
    hours=time/3600;
    h=time%3600;
    min=h/60;
    second=h%60;
    printf("%d:%d:%d\n",hours,min,second);
return 0;
}
