#include<stdio.h>
int main(){


    while(1){
        int n,i,c=0;
        scanf("%d",&n);
        if(n==0){
            break;
        }
        int a[n];
        for(i=0;i<n;++i){
            scanf("%d",&a[i]);
        }
        for(i=1;i<n-1;++i){
            if(a[i]>a[i+1]&&a[i]>a[i-1]||a[i]<a[i+1]&&a[i]<a[i-1]){
                c++;
            }
        }
        if(a[0]>a[n-1]&&a[0]>a[1]||a[0]<a[n-1]&&a[0]<a[1]){
            c++;
        }
        if(a[n-1]>a[n-2]&&a[n-1]>a[0]||a[n-1]<a[n-2]&&a[n-1]<a[0]){
            c++;
        }
        printf("%d\n",c);
    }


}
