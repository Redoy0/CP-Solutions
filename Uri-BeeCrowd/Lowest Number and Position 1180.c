#include<stdio.h>
int main()
{
    int i,j,n,c=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;++i)
    {
        scanf("%d",&a[i]);
    }
    int l=a[0];
    for(i=1,j=0;i<n;++i,j++)
    {
        if(a[i]<l)
        {
            l=a[i];
            c=j+1;
        }

    }
    printf("Menor valor: %d\nPosicao: %d\n",l,c);
    return 0;
}

