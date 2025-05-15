#include<stdio.h>
int main(){
    int i,n,x,null=0,evenP=0,evenN=0,oddP=0,oddN=0;
    scanf("%d",&x);
    for(i=1;i<=x;++i){
        scanf("%d",&n);
    if(n==0){
       printf("NULL\n");
        }
    if(n>0 && n%2==0){
        printf("EVEN POSITIVE\n");
        }
    if(n<0 && n%2==0){
        printf("EVEN NEGATIVE\n");
        }
    if(n<0 && n%2!=0){
        printf("ODD NEGATIVE\n");
        }
    if(n>0 && n%2!=0){
        printf("ODD POSITIVE\n");
        }

    }


return 0;
}
