#include<stdio.h>

int main(){
    int a,b,i,temp;
    scanf("%d %d",&a,&b);
    if(a>b){temp=a;a=b;b=temp;}
        for(i=a+1;i<b;++i){
            if(i%5==3 || i%5==2){
                printf("%d\n",i);
            }
        }

return 0;
}
