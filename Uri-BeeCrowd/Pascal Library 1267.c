#include<stdio.h>
int main(){
    int n,d,i,j;
    while(scanf("%d %d",&n,&d)&&n!=0&&d!=0){
        int sum=0,a[d][n];
        for(i=0;i<d;++i){
            for(j=0;j<n;++j){
                scanf("%d",&a[i][j]);
            }
        }

        for(i=0;i<n;++i){
            for(j=0;j<d;++j){
                sum+=a[j][i];
            }
            if(sum==d) {
                printf("yes\n");
                break;
            }
            else{
                sum=0;
            }
        }
        if(sum==0){
            printf("no\n");
        }

    }

return 0;
}
