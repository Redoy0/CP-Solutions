#include<stdio.h>

int main(){
    int n,c,b[5],i,a[5];

    while(scanf("%d",&n)&& n!=0){
            while(n--){

                    c=0;
        for(i=0;i<5;++i){
            scanf("%d",&a[i]);
                b[i]=0;
        }
        for(i=0;i<5;++i){
            if(a[i]<=127){
                b[i]=1;
                c++;
            }
        }
        if(c==1){
            for(i=0;i<5;++i){
                if(b[i]==1) printf("%c\n",65+i);

            }
        }
        else{
            printf("*\n");
        }

    }

    }
return 0;
}
