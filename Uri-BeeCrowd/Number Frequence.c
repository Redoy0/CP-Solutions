#include<stdio.h>

int main(){
    int temp,i,n,j,count=0;
    scanf("%d",&n);
    int x[n],a[n];
    for(i=0;i<n;++i){
        scanf("%d",&x[i]);
        a[i]=0;
    }
    for(i=0;i<n;++i){
        for(j=i+1;j<n;++j){
            if(x[i]>x[j]){
                temp=x[i];
                x[i]=x[j];
                x[j]=temp;
            }

        }

    }
    for(i=0;i<n;++i){
            count=1;
            for(j=i+1;j<n;++j){
                if(x[i]==x[j]){
                    count++;
                    x[j]=-1;
                }
            }
        a[i]=count;
    }

    for(i=0;i<n;++i){
            if(x[i]!=-1){
                printf("%d aparece %d vez(es)\n",x[i],a[i]);
            }
    }
    return 0;
}
