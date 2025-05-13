#include<stdio.h>
int main()
{
    int k,n,w;
    scanf("%d%d%d",&k,&n,&w);
    int cost= ((w*(w+1))/2)*k;
    if(cost<=n){
        printf("0\n");
    }else{
        printf("%d\n",cost-n);
    }

    return 0;
}
//3 3 = 18    ((n*n+1)/2)*k = 18


