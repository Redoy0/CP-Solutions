#include<stdio.h>
int main()
{
    int i,n,a,j,c;
    scanf("%d",&n);
    for(i=0;i<n;++i){
        scanf("%d",&a);
        c=0;
    for(j=1;j<=a;++j){
        if(a%j==0){
            c++;
        }

    }
    if(c==2){
            printf("%d eh primo\n",a);
        }
        else{
            printf("%d nao eh primo\n",a);
        }
    }


return 0;
}
