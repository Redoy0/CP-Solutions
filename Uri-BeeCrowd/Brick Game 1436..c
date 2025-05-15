#include<stdio.h>

int main()
{
    int   c=1,n,i,t,d;
    scanf("%d",&n);
    while(n--){
        scanf("%d",&t);
        int a[t];
        for(i=0;i<t;++i)
        {
            scanf("%d",&a[i]);
        }
        printf("Case %d: %d\n",c,a[i/2]);
        c++;
    }
    return 0;
}
