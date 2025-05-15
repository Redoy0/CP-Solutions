#include<stdio.h>
int main()
{
    int n,row,col;
    while(scanf("%d",&n)!=EOF){
    for(row=1;row<=(n/2)+1;row++)
    {
        for(col=1;col<=n/2+1-row;col++)
        {
            printf(" ");
        }
        for(col=1;col<=2*row-1;col++)
        {
            printf("*",col);
        }
        printf("\n");
    }

   for(row=1;row<=2;row++)
    {
        for(col=1;col<=n/2+1-row;col++)
        {
            printf(" ");
        }
        for(col=1;col<=2*row-1;col++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
    }
    return 0;
}
