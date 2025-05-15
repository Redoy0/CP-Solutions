#include<stdio.h>
int main(){
    long long n,m;
    while(scanf("%lld %lld",&n,&m)!=EOF){
        int sum=0;
        while(m!=0){
            sum+=m%10;
            m/=10;
        }
        if(sum%3==0) printf("%d sim\n",sum);
        else printf("%d nao\n",sum);
    }

return 0;
}
