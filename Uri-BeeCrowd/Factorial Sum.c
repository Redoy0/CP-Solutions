#include<stdio.h>
int main(){
    long  long int temp1,temp2,n1,n2;
    int  i;
    while(scanf("%lld %lld",&n1,&n2)!=EOF){
    temp1=1;temp2=1;
    for(i=n1;i>0;--i){
        temp1*=n1;
       n1--;
    }
    for(i=n2;i>0;--i){
        temp2*=n2;
       n2--;
    }
    printf("%lld\n",temp1+temp2);
    }


return 0;
}
