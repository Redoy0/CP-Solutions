#include<stdio.h>

int main(){
    int n,i,j;
    scanf("%d",&n);
    int  a[n];
    for(i=0;i<n;++i)
    {
        scanf("%d",&a[i]);
    }
    for(i=0,j=1;j<n;++i,j++)
    {
        if(a[i]>a[j]){
            printf("%d\n",j+1);
            return 0;
        }
    }
    printf("0\n");

return 0;
}
