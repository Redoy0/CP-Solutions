#include<stdio.h>
int main(){
    int m,n,i,j,k,sum=0;
    while(1){
    scanf("%d  %d",&m,&n);
    if(m<=0 || n<=0){
            break;
          }
    if(m>n)
        {
            j=m;
            m=n;
            n=j;
    }

    for(k=m;k<=n;++k){
        printf("%d ",k);
        sum+=k;
    }
    printf("Sum=%d\n",sum);
    sum=0;
    }


return 0;
}
