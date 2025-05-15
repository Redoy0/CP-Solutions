#include<stdio.h>

int main()
{
    int  n;
    while(scanf("%d",&n)!=0)
    {   if(n==0)break;
        int i,j,temp,a[n],b[n];
    for(i=0;i<n;++i)
    {
        scanf("%d",&a[i]);
        b[i]=a[i];
    }
    for(i=0;i<n;++i)
    {
        for(j=i+1;j<n;++j)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<n;++i){
        if(b[i]==a[n-2])
        {
            printf("%d\n",i+1);
        }
    }



    }

return 0;
}

