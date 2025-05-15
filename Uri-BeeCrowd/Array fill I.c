#include<stdio.h>
int main()
{
    int i,a,s=1,n[10];
    scanf("%d",&a);
    for(i=0;i<10;i++){
        n[i]=a;
        printf("N[%d] = %d\n",i,a);
        a=a*2;

    }
return 0;
}
