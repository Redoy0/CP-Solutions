#include<stdio.h>
int main(){
    long long a,b,ans;
    scanf("%lld %lld",&a,&b);
    ans=a/b;
    if(a%b!=0) ans++;
    printf("%lld\n",ans);


return 0;
}


