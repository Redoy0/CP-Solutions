#include<stdio.h>
int main(){
    int i,n,b;
    long long int  a[61];
    scanf("%d",&n);
    a[0]=0;
    a[1]=1;
    for(i=2;i<61;++i)
    {
        a[i]=a[i-1]+a[i-2];
    }
    for(i=0;i<n;++i)
    {
        scanf("%d",&b);
        printf("Fib(%d) = %lld\n",b,a[b]);
    }
return  0;
}
