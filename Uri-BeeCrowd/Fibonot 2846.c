#include<stdio.h>
#define MAX_SIZE 100100
int main(){

    int i,j,k,n;
    long long fibo[MAX_SIZE];
    long  long fibnot[MAX_SIZE];
    fibo[0]=0;
    fibo[1]=1;
    for(i=2;i<=MAX_SIZE;++i)
    {
        fibo[i]=fibo[i-1]+fibo[i-2];
    }
    for(i=2,j=1,k=1;j<=MAX_SIZE;++j)
    {
        if(fibo[i]!=j)
        {
            fibnot[k]=j;
            k++;
        }
        else{
            i++;
        }
    }
    scanf("%d",&n);
    printf("%lld\n",fibnot[n]);
return  0;
}

