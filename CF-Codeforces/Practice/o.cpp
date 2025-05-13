#include<stdio.h>

int main(){
    int x,ans=0;
    scanf("%d",&x);

    while(x%2==0){
        ans++;
        x/=2;
    }


    printf("%d\n",ans);

return 0;
}

