#include<stdio.h>
int main(){
    int x,i;
    while(1){
        long long int m;
        scanf("%d %lld",&x,&m);
        if (x==0 && m==0) break;
        else{
            printf("%lld\n",x*m);
            continue;
        }
    }
return 0;
}
