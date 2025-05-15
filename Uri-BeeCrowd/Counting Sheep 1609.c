#include<stdio.h>
int main(){
    int a[10000];
    int i,n,t,j,temp,c;
    scanf("%d",&t);
    while(t--){
        c=0;
        scanf("%d",&n);
        for(i=0;i<n;++i){
            scanf("%d",&a[i]);
            c++;
        }
        temp=0;
        for(i=0;i<n-1;++i){
                temp=a[i];
            for(j=i+1; j<n; j++){
                if(temp==a[j]){
                    c--;
                    break;
                }
            }
        }

            printf("%d\n",c);
        }



return 0;
}
