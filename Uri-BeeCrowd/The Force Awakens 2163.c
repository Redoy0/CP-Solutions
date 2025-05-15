#include<stdio.h>
int main()
{
    int i,j,n,m,c=0,d=0;
    scanf("%d %d",&n,&m);
    int a[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=1;i<n-1;i++)
    {
        for(j=1;j<m-1;j++)
        {
            if(a[i][j]==42)
                if(a[i-1][j-1]==7&&a[i-1][j]==7&&a[i-1][j+1]==7)
                    if(a[i][j-1]==7&&a[i][j+1]==7)
                        if(a[i+1][j-1]==7&&a[i+1][j]==7&&a[i+1][j+1]==7)
                            {
                                c=i+1;
                                d=j+1;

                            }


        }
    }
    printf("%d %d\n",c,d);

    return 0;

}
