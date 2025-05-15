#include<stdio.h>

int main(){
    int i,j,n,m,arr[100],count=0,temp;
    while(scanf("%d %d",&n,&m)!=0){
            int a[m];

    if(n==0&&m==0) break;

    for(i=0;i<m;++i){
        scanf("%d",&arr[i]);

    }
    for(i=0;i<m-1;++i){

       for(j=0;j<m-1;++j){
        if(arr[j]>arr[j+1]){
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
       }

    }

    for(i=0,j=0;i<m-1;++i){
            if(a[i]!=-1){
                for(j=i+1;j<m-1;++j){
                    if(arr[i]==arr[j]){
                            count++;
                        a[j]=-1;
                    }
                }
            }
    }
    printf("%d\n",count);
    count=0;
}
return 0;
}
