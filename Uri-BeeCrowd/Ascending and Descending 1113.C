#include<stdio.h>
int main(){
    int i,x,y;

    for(i=1; ;++i){
        scanf("%d  %d",&x,&y);
        if(x==y) break;
        else if(x<y){
            printf("Crescente\n");
        }
        else if(x>y){
            printf("Decrescente\n");
        }

    }

return 0;
}
