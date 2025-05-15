#include<stdio.h>
int main(){
    int  temp,sum=0,i,x,y;
    scanf("%d  %d",&x,&y);
    if(x>y){
        temp=x;
        x=y;
        y=temp;
    }
    for(i=x;i<=y;++i){
        if(i%13!=0){
            sum+=i;
        }
    }
    printf("%d\n",sum);

return 0;
}
