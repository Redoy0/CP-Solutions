#include<stdio.h>
#include<string.h>
const m=998244353;
int main()
{   long long int n;
    scanf("%lld",&n);
    n=n%m;
   if(n<0){
        n=n+m;
   }

    printf("%lld\n",n);

    return 0;
}
