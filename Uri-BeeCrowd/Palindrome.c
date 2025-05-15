#include<stdio.h>
int main(){
int i,n1,n,rev=0;
printf("Input number: ");
scanf("%d",&n);
n1=n;
for(i=1;n!=0;i++){
    rev=(rev*10)+(n%10);
    n/=10;
}
printf("Reverse of %d = %d",n1,rev);
return 0;
}


