#include<stdio.h>
int main(){
    int temp1,temp2,next,i,n;
    scanf("%d",&n);
        temp1=0;
        temp2=1;
        next=temp1+temp2;
        printf("%d %d ",temp1,temp2);
    for(i=3;i<=n-1;++i){
        printf("%d ",next);
        temp1=temp2;
        temp2=next;
        next=temp1+temp2;
    }
    printf("%d\n",next);


return 0;
}
