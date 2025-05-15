#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c,Max,MaiorAB;

    scanf("%d %d %d",&a,&b,&c);
    Max=(a+b+abs(a-b))/2;
    MaiorAB=(Max+c+abs(Max-c))/2;
    printf("%d eh o maior\n",MaiorAB);
return 0;
}
