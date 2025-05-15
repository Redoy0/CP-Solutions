#include<stdio.h>
#include<math.h>
int main(){
    int  x1,y1,x2,y2;
    int x,y;
    while(scanf("%d %d %d %d",&x1,&y1,&x2,&y2)!=0){
        x=abs(x1-x2);
        y=abs(y1-y2);

        if(x1==0&&y1==0&&x2==0&&y2==0) break;
        else if(x1==x2&&y1==y2){
            printf("0\n");
        }
        else if(x==y||((x1==x2)&&y1!=y2)||((y1==y2)&&x1!=x2)){
            printf("1\n");
        }else{
            printf("2\n");
        }
    }

return 0;
}
