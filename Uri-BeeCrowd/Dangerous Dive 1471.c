#include<stdio.h>

int main(){
    int i,j,n,r,t,c;
    while(scanf("%d %d",&n,&r)==2){
    int a[n];
    for(i=0;i<n;++i){
        a[i]=i+1;
    }
    for(i=0;i<r;++i){
        scanf("%d",&t);
        a[t-1]=0;
    }
    c=0;
    for(i=0;i<n;++i){
        if(a[i]!=0){
            c++;
            printf("%d ",a[i]);
        }
    }
    if(c==0){
        printf("*");
    }
        printf("\n");




    }
return 0;}
