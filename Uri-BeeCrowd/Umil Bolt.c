#include<stdio.h>
int main()
{
    int n,i;

    while(scanf("%d",&n)!=EOF){
    double l,a[n];
    for (i=0;i<n;++i)
    {
        scanf("%lf",&a[i]);
    }
    l=a[0];
    for(i=0;i<n;++i)
    {
        if(a[i]<l && a[i]>=9&& a[i]<=11){
            l=a[i];
        }
    }
    printf("%.2lf\n",l);
    }
    return 0;
}
