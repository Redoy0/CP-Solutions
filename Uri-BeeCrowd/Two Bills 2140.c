#include<stdio.h>
int main(){
    int n,m,i,po,im;
    int a[]={7,12,22,52,102,15,25,55,105,30,60,110,70,120,150,4,10,20,40,100,200};
    while(1){
        scanf("%d%d",&n,&m);
        po=0;
        im=0;
        if(n==0&& m==0) break;
        else{
            for(i=0;i<21;++i){
                if((m-n)==a[i]){
                    po=1;
                    break;
                }

            }
            if(po==1){
                printf("possible\n");
            }
            else{
                printf("impossible\n");
            }
        }


    }

return 0;
}
