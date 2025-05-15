#include<stdio.h>

int main()
{   int n,i,j,k;
    while(scanf("%d",&n)!=EOF){
            int a[n][n];
            k=n-1;
            for(i=0;i<n;++i){
                for(j=0;j<n;++j){
                    if(a[i]==a[j]){
                        a[i][j]=1;
                    }
                    else if(a[j]==a[k]){
                        a[i][k]=2;
                    }
                    else{
                        a[i][j]=3;
                    }
                    if(a[i]==a[k]){
                        a[i][k]=2;
                    }
                }k--;
            }

            for(i=0;i<n;i++){
                for(j=0;j<n;++j){
                    printf("%d",a[i][j]);
                }
                printf("\n");
            }

    }



}
