#include<stdio.h>
int rec2(int u){
            if(u==0) return 0;
            printf("%d ",u);
            return rec2(u-1);
        }
int rec(int low,int upp){
    if(low==upp){
            rec2(upp);
    }else if(low<upp){
        printf("%d ",low);
        return rec(low+1,upp);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    rec(1,n);

return 0;
}
