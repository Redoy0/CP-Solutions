#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int i,n,c=0;
        float avg,sum=0.0;
        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;++i){
            scanf("%d",&a[i]);
            sum+=a[i];
        }
        avg=(float)sum/(float)n;
       for(i=0;i<n;++i){
        if(a[i]>avg){
            c++;
        }
       }
    printf("%.3f%%\n",(float)c*100/(float)n);
    }

return 0;
}
