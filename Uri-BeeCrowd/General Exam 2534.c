#include<stdio.h>
int main(){
    int n,q;
    while(scanf("%d %d",&n,&q)!=EOF){
        int i,j,g[n],p[q],temp=0,x=0;
        for(i=0;i<n;++i){
            scanf("%d",&g[i]);
        }

        for(i=0;i<n;i++){
            for(j=i+1;j<n;++j){
                if(g[i]<g[j]){
                    temp=g[i];
                    g[i]=g[j];
                    g[j]=temp;

            }
            }
        }

        for(i=0;i<q;++i){
            scanf("%d",&p[i]);
        }

        for(i=0;i<q;++i){
            x=p[i];
            printf("%d\n",g[x-1]);
        }
    }


return 0;
}


