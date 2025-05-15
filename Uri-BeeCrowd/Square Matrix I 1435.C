#include<stdio.h>
int main()
{
    int n,i,j,layer,start,end,layer_count;
    while(scanf("%d",&n)&&n)
    {
        int a[n][n];
        layer_count=n/2;
        if(n%2==1)layer_count++;
        start=0;
        end=n-1;
        for(layer=1; layer<=layer_count; layer++)
        {
            for(i=start; i<=end; i++)
            {
                for(j=start; j<=end; j++)
                    a[i][j]=layer;
            }
            start++;
            end--;
        }
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                if(j==0) printf("%3d",a[i][j]);
                else printf("%4d",a[i][j]);
            }
            printf("\n");
        }
        printf("\n");

    }

    return 0;

}
