#include<stdio.h>
int main()
{
    int a,n[1000],i,j;
    scanf("%d",&a);
    for(i=0,j=0;i<1000;i++,j++)
    {   if(i==a || i%a==0){
            j=0;

        }
        printf("N[%d] = %d\n",i,j);

    }

    return 0;
}
