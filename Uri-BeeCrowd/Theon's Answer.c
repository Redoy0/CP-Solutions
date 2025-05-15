#include<stdio.h>
int main()
{
    int i,l,size,c=1,n[100];
    scanf("%d",&size);
    for(i=0;i<size;++i)
    {
        scanf("%d",&n[i]);
    }
    l=n[0];
    for(i=0;i<size;++i)
    {
        if(n[i]<l){
                l=n[i];
                c=i+1;
        }

    }
    printf("%d\n",c);
}
