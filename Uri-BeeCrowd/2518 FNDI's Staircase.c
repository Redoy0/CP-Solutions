#include<stdio.h>
#include<math.h>

int main()
{
    int n,h,l,c;
    double len,total,tt;
    while(scanf("%d",&n)!=EOF)
    {
        scanf("%d %d %d",&h,&c,&l);
        len = pow(h,2)+pow(c,2);
        total = n*sqrt(len);
        tt = (total*l)/10000.0;
        printf("%.4lf\n",tt);
    }


}
