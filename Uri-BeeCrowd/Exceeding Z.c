#include<stdio.h>
int main()
{
    int x,z,i,c=1,a=0;
    scanf("%d",&x);
    scanf("%d",&z);
    for(i=x;i>=z;i++){

            scanf("%d",&z);
    }
    for(i=x;i<z;++i){
        a+=i;
        if(a>z){
            break;
        }
        c++;
    }

    printf("%d\n",c);

return 0;
}
