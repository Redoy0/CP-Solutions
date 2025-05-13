#include<stdio.h>

int main(){
    int y,x;
    scanf("%d",&y);
    x=y;
    int c=x%10;
    x/=10;
    int b=x%10;
    x/=10;
    int a=x%10;

    int ans=y+((b*100)+(c*10)+a)+((c*100)+(a*10)+b);
    printf("%d\n",ans);

return 0;
}






