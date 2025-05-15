#include<stdio.h>
int main(){
int i,n,pro=1;
printf("Input number: ");
scanf("%d",&n);
for(i=1;n!=0;i++){
    pro=pro*(n%10);//1
    n=n/10;
}
    printf("Product of digits: %d\n",pro);
return 0;
}
