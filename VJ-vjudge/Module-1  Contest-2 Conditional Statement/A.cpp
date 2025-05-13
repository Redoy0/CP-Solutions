#include<stdio.h>
#include<math.h>
int main()
{
    int n,d;
    scanf("%d",&n);
    d=log10(abs(n))+1;
    if(d>=3) {
        n/=powl(10, d-3);
        n*=powl(10, d-3);
    }
    printf("%d\n",n);

    return 0;
}
