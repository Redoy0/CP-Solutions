#include<stdio.h>
int main(){

    int i=1,x;
    scanf("%d",&x);
    while(i<=6){
        if(x%2!=0){
            printf("%d\n",x);
            i++;
        }
        x++;
    }

return 0;
}
