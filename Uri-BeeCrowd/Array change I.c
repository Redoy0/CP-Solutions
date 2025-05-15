#include<stdio.h>
int main()
{
    int n[20],i,j,a[20];
    for(i=0;i<20;++i)
    {
        scanf("%d",&n[i]);
        a[19-i]=n[i];
    }
    for(i=0;i<20;++i)
    {
        printf("N[%d] = %d\n",i,a[i]);

    }

    return 0;

}
