#include<stdio.h>
int main()
{
    int i,n,x,y;
    float a;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d%d",&x,&y);
    if(y!=0){
        a=(float)x/y;
        printf("%.1f\n",a);
    }
    else if(y==0){
        printf("divisao impossivel\n");
    }
    }
    return 0;
}
