#include<stdio.h>
int main(){

    int i,j,n,in=0,x,out=0;
    scanf("%d",&n);

    for(i=1;i<=n;++i){
        scanf("%d",&x);
        if(x>=10 && x<=20){
            in+=1;
        }else{
            out+=1;
        }
    }
    printf("%d in\n",in);

    printf("%d out\n",out);

return 0;
}
