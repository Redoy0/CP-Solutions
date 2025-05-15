#include<stdio.h>
int main()
{   int base,exponent,i,temp;
    printf("Input base : ");
    scanf("%d",&base);
    printf("Input exponent : ");
    scanf("%d",&exponent);
    temp=base;
    for(i=1;i<exponent;i++){
        temp=temp*base;
    }
    printf("%d ^ %d = %d ",base,exponent,temp);
    return 0;
}
