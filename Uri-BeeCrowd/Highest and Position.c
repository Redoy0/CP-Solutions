#include<stdio.h>
int main()
{
    int i,h=0,a[100],c;
    for(i=0;i<100;++i)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<100;++i)
    {
        if(a[i]>h)
        {
            h=a[i];
            c=i+1;
        }

    }
    printf("%d\n%d\n",h,c);
}
