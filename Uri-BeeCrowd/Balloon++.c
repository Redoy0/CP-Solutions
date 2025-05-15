#include<stdio.h>
#define pi 3.1415
int main(){
    long long int  r,l,v,c=0;
    scanf("%lld %lld",&r,&l);
    v=(4*pi*(r*r*r))/3;
    while(l>0){
        l-=v;
        c++;
    }
    printf("%lld\n",c-1);
return 0;
}
