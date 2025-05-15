#include<stdio.h>
int main()
{
    int fact[8]={1,2,6,24,120,720,5040,40320};
    int i,n,s;
    scanf("%d",&n);
    s=0;
    for(i=7;i>=0;i--){
        s=s+n/fact[i];
        n=n%fact[i];
    }
    printf("%d\n",s);

    return 0;
}
