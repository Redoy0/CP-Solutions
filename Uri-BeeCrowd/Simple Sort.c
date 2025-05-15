#include<stdio.h>
int main(){
    int a, b, c,first,second,third,x,y,z;
    scanf("%d %d %d",&a,&b,&c);
    x=a;y=b;z=c;
    if(a<b && a<c){
        first=a;
        if(b<c){
            second=b;
            third=c;
        }else{
            second=c;
            third=b;
        }
    }
    else if(b<a && b<c){
        first=b;
        if(a<c){
            second=a;
            third=c;
        }else{
            second=c;
            third=a;
        }
    }
    else if(c<a && c<b){
        first=c;
        if(a<b){
            second=a;
            third=b;
        }else{
            second=b;
            third=a;
        }
    }
    printf("%d\n%d\n%d\n",first,second,third);
    printf("\n");
    printf("%d\n%d\n%d\n",x,y,z);


return 0;
}
