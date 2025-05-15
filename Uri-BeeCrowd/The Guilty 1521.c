#include<stdio.h>
int main(){
    int n,k,j,i,a[60];
    while(1){
        scanf("%d",&n);
        if(n==0) break;
        for(i=0;i<n;++i){
            scanf("%d",&a[i]);
        }
        scanf("%d",&j);
        while(a[j-1]!=j){
            j=a[j-1];
        }
        printf("%d\n",j);
    }

return 0;
}
