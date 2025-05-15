#include <stdio.h>
int main()
{
    int s1,s2,m1,m2,h1,h2,d1,d2,d1s,d2s,total;
    int day,hours,min,sec;
    scanf("%*s  %d",&d1);
    scanf("%d %*s %d %*s %d",&h1,&m1,&s1);
    scanf("%*s  %d",&d2);
    scanf("%d %*s %d %*s %d",&h2,&m2,&s2);
    d1s=s1+(m1*60)+(h1*(3600))+(d1*(86400));
    d2s=s2+(m2*60)+(h2*(3600))+(d2*(86400));
    total=d2s-d1s;
    day=total/86400;
    total=total%86400;
    hours=total/3600;
    total=total%3600;
    min=total/60;
    sec=total%60;

    printf("%d dia(s)\n",day);
    printf("%d hora(s)\n",hours);
    printf("%d minuto(s)\n",min);
    printf("%d segundo(s)\n",sec);
    return 0;
}
